/******************************************************************************
  A simple program of Hisilicon HI3531 video input and output implementation.
  Copyright (C), 2010-2011, Hisilicon Tech. Co., Ltd.
 ******************************************************************************
	Modification:  2011-8 Created
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/ioctl.h>

#include "sample_comm.h"


HI_S32 QUANT_VI_D1_BT656(void) {

	HI_U32 u32ViChnCnt = 1;

	VO_CHN VoChn = 0;
	VI_CHN ViChn = 0;

	HI_S32 s32Ret = HI_SUCCESS;
	HI_U32 u32BlkSize;


	// **********************************************************
	// 				step 1: init global variables
	// **********************************************************
		VB_CONF_S stVbConf;
		SIZE_S stSize;
		memset(&stVbConf, 0, sizeof(VB_CONF_S));
		stSize.u32Width = 720;
		stSize.u32Height = 576;

		// hi_math.h required for CEILING_2_POWER()
		u32BlkSize = CEILING_2_POWER(stSize.u32Width, SAMPLE_SYS_ALIGN_WIDTH) * CEILING_2_POWER(stSize.u32Height, SAMPLE_SYS_ALIGN_WIDTH) * 1.5;
		stVbConf.u32MaxPoolCnt = 128;

		// ddr0 video buffer
		stVbConf.astCommPool[0].u32BlkSize = u32BlkSize;
		stVbConf.astCommPool[0].u32BlkCnt = u32ViChnCnt * 8;
	// ----------------------------------------------------------


	// **********************************************************
	// 				step 2: mpp system init
	// **********************************************************
		MPP_SYS_CONF_S stSysConf = { 0 };
		stSysConf.u32AlignWidth = SAMPLE_SYS_ALIGN_WIDTH;

		HI_MPI_SYS_Exit();	// Deinitializes the HiMPP system
		HI_MPI_VB_Exit();	// Deinitializes the HiMPP VB pool

		// Sets the attributes of the HiMPP VB pool
	    s32Ret = HI_MPI_VB_SetConf(&stVbConf);
	    if (s32Ret != HI_SUCCESS) {
	        printf("HI_MPI_VB_SetConf failed!\n");
	        return HI_FAILURE;
	    }

	    // Initializes a HiMPP VB pool
	    s32Ret = HI_MPI_VB_Init();
	    if (s32Ret != HI_SUCCESS) {
	    	printf("HI_MPI_VB_Init failed!\n");
	        return HI_FAILURE;
	    }

	    // Sets system control parameters
	    s32Ret = HI_MPI_SYS_SetConf(&stSysConf);
	    if (s32Ret != HI_SUCCESS) {
	    	printf("HI_MPI_SYS_SetConf failed\n");
	        return HI_FAILURE;
	    }

	    // Initializes the HiMPP system
	    s32Ret = HI_MPI_SYS_Init();
	    if (s32Ret != HI_SUCCESS) {
	    	printf("HI_MPI_SYS_Init failed!\n");
	        return HI_FAILURE;
	    }
	// ----------------------------------------------------------


	// **********************************************************
	// 			step 3: start vi dev & chn to capture
	// **********************************************************

		VI_DEV ViDev;
		VI_CHN ViChn;
		HI_S32 i;
		HI_S32 s32Ret;

		/*** get parameter from Sample_Vi_Mode ***/
		SAMPLE_VI_PARAM_S stViParam;
		stViParam.s32ViDevCnt = 1;
		stViParam.s32ViDevInterval = 1;
		stViParam.s32ViChnCnt = 1;
		stViParam.s32ViChnInterval = 1;

		VI_DEV_ATTR_S	stViDevAttr;
		memset(&stViDevAttr, 0, sizeof(stViDevAttr));
		memcpy(&stViDevAttr, &DEV_ATTR_BT656D1_1MUX, sizeof(stViDevAttr));

		/*** Start VI Dev ***/
		for(i = 0; i < stViParam.s32ViDevCnt; i++) {
			ViDev = i * stViParam.s32ViDevInterval;

			s32Ret = HI_MPI_VI_SetDevAttr(ViDev, &stViDevAttr);
			if (s32Ret != HI_SUCCESS) {
				printf("HI_MPI_VI_SetDevAttr failed with %#x!\n", s32Ret);
				return HI_FAILURE;
			}

			s32Ret = HI_MPI_VI_EnableDev(ViDev);
			if (s32Ret != HI_SUCCESS) {
				printf("HI_MPI_VI_EnableDev failed with %#x!\n", s32Ret);
				return HI_FAILURE;
			}
		}

		/*** Start VI Chn ***/
		VI_CHN_ATTR_S stChnAttr;
		for(i = 0; i < stViParam.s32ViChnCnt; i++) {
			ViChn = i * stViParam.s32ViChnInterval;

			stChnAttr.stCapRect.s32X = 0;
			stChnAttr.stCapRect.s32Y = 0;
			stChnAttr.stCapRect.u32Width = 720;
			stChnAttr.stCapRect.u32Height = 576;

			stChnAttr.enCapSel = VI_CAPSEL_BOTH;
			stChnAttr.stDestSize.u32Width = 720;
			stChnAttr.stDestSize.u32Height = 576;
			stChnAttr.enPixFormat = SAMPLE_PIXEL_FORMAT;

			stChnAttr.bMirror = 0;
			stChnAttr.bFlip = 0;

			stChnAttr.bChromaResample = 0;
			stChnAttr.s32SrcFrameRate = 30;
			stChnAttr.s32FrameRate = 30;

			s32Ret = HI_MPI_VI_SetChnAttr(ViChn, &stChnAttr);
			if (s32Ret != HI_SUCCESS) {
				printf("failed with %#x!\n", s32Ret);
				return HI_FAILURE;
			}

			s32Ret = HI_MPI_VI_EnableChn(ViChn);
			if (s32Ret != HI_SUCCESS) {
				printf("failed with %#x!\n", s32Ret);
				return HI_FAILURE;
			}
		}
	// ----------------------------------------------------------

	// TODO: HI_MPI_VI_GetFrame() just here

	printf("---------------press any key to exit!---------------\n");
	getchar();

	return s32Ret;
}

int main(int argc, char *argv[]) {

	HI_S32 s32Ret;

	s32Ret = QUANT_VI_D1_BT656();
	if (s32Ret == HI_SUCCESS) {
		printf("program exit normally!\n");
	} else {
		printf("program exit abnormally!\n");
	}

	return 0;
}
