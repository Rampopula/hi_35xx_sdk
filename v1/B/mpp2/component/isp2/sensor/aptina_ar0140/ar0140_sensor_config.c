#ifndef _AR0140_SENSOR_CONFIG_C_
#define _AR0140_SENSOR_CONFIG_C_



// [addr:data]
// when addr = 0xFFFF, configuration process end; when addr = 0xFFFE, deay data ms;

int sensor_rom_30_lin[] = {
//[Linear (Parallel) 720p30 74.25MHz PCLK 24MHz MCLK]

//Reset
0x301A0001, 	// RESET_REGISTER
0x301A10D8, 	// RESET_REGISTER
//Delay=200

0xFFFE00C8,   //delay 200ms

//LOAD=sequencer_ers_0828_AR0140.i
//LOAD= AR0140 Rev3 Optimized settings
//Delay=100

//[sequencer_ers_0828_AR0140.i]
0x30888000, 
0x30864558,
0x30866E9B,
0x30864A31,
0x30864342,
0x30868E03,
0x30862714,
0x30864578,
0x30867B3D,
0x3086FF3D,
0x3086FF3D,
0x3086EA27,
0x3086043D,
0x30861027,
0x30860527,
0x30861535,
0x30862705,
0x30863D10,
0x30864558,
0x30862704,
0x30862714,
0x30863DFF,
0x30863DFF,
0x30863DEA,
0x30862704,
0x30866227,
0x3086288E,
0x30860036,
0x30862708,
0x30863D64,
0x30867A3D,
0x30860444,
0x30862C4B,
0x30868F01,
0x30864372,
0x3086719F,
0x30864643,
0x3086166F,
0x30869F92,
0x30861244,
0x30861646,
0x30864316,
0x30869326,
0x30860426,
0x3086848E,
0x30860327,
0x3086FC5C,
0x30860D57,
0x30865417,
0x30860955,
0x30865649,
0x30865F53,
0x30860553,
0x30860728,
0x30866C4C,
0x30860928,
0x30862C72,
0x3086A37C,
0x30869728,
0x3086A879,
0x30866026,
0x30869C5C,
0x30861B45,
0x30864845,
0x30860845,
0x30868826,
0x3086BE8E,
0x30860127,
0x3086F817,
0x30860227,
0x3086FA17,
0x3086095C,
0x30860B17,
0x30861026,
0x3086BA5C,
0x30860317,
0x30861026,
0x3086B217,
0x3086065F,
0x30862888,
0x30869060,
0x308627F2,
0x30861710,
0x308626A2,
0x308626A3,
0x30865F4D,
0x30862808,
0x30861A27,
0x3086FA84,
0x308669A0,
0x3086785D,
0x30862888,
0x30868710,
0x30868C82,
0x30868926,
0x3086B217,
0x3086036B,
0x30869C60,
0x30869417,
0x30862926,
0x30868345,
0x3086A817,
0x30860727,
0x3086FB17,
0x30862945,
0x30868820,
0x30861708,
0x308627FA,
0x30865D87,
0x3086108C,
0x30868289,
0x3086170E,
0x30864826,
0x30869A28,
0x3086884C,
0x30860B79,
0x30861730,
0x30862692,
0x30861709,
0x30869160,
0x308627F2,
0x30861710,
0x30862682,
0x30862683,
0x30865F4D,
0x30862808,
0x30861A27,
0x3086FA84,
0x308669A1,
0x3086785D,
0x30862888,
0x30868710,
0x30868C80,
0x30868A26,
0x30869217,
0x3086036B,
0x30869D95,
0x30862603,
0x30865C01,
0x30864558,
0x30868E00,
0x30862798,
0x3086170A,
0x30864A0A,
0x30864316,
0x30860B43,
0x30865B43,
0x30861659,
0x30864316,
0x30868E03,
0x3086279C,
0x30864578,
0x30861707,
0x3086279D,
0x30861722,
0x30865D87,
0x30861028,
0x30860853,
0x30860D8C,
0x3086808A,
0x30864558,
0x30861708,
0x30868E01,
0x30862798,
0x30868E00,
0x308676A2,
0x308677A2,
0x30864644,
0x30861616,
0x3086967A,
0x30862644,
0x30865C05,
0x30861244,
0x30864B71,
0x3086759E,
0x30868B86,
0x3086184A,
0x30860343,
0x30861606,
0x30864316,
0x30860743,
0x30861604,
0x30864316,
0x30865843,
0x3086165A,
0x30864316,
0x30864558,
0x30868E03,
0x3086279C,
0x30864578,
0x30867B17,
0x30860727,
0x30869D17,
0x30862245,
0x30865822,
0x30861710,
0x30868E01,
0x30862798,
0x30868E00,
0x30861710,
0x30861244,
0x30864B8D,
0x3086602C,
0x30862C2C,
0x30862C00,

//[==== Optimized and Sequencer settings (DO NOT CHANGE) ====]
//[AR0140 Rev3 Optimized Settings]
0x30440400, //Manufacturer-specific
0x3052A134, //Manufacturer-specific
0x3092010F, //Manufacturer-specific
0x30FE0080, //Manufacturer-specific
0x3ECE40FF, //Manufacturer-specific
0x3ED0FF40, //Manufacturer-specific
0x3ED2A906, //Manufacturer-specific
0x3ED4001F, //Manufacturer-specific
0x3ED6638F, //Manufacturer-specific
0x3ED8CC99, //Manufacturer-specific
0x3EDA0888, //Manufacturer-specific
0x3EDE8878, //Manufacturer-specific
0x3EE07744, //Manufacturer-specific
0x3EE24463, //Manufacturer-specific
0x3EE4AAE0, //Manufacturer-specific
0x3EE61400, //Manufacturer-specific
0x3EEAA4FF, //Manufacturer-specific
0x3EEC80F0, //Manufacturer-specific
0x3EEE0000, //Manufacturer-specific
0x31E01701, //Manufacturer-specific


0xFFFE0064,	//delay 100ms

//PLL_configuration_Parallel
0x302A0006, 	// VT_PIX_CLK_DIV
0x302C0001, 	// VT_SYS_CLK_DIV
0x302E0004, 	// PRE_PLL_CLK_DIV
0x30300042, 	// PLL_MULTIPLIER
0x3036000C, 	// OP_PIX_CLK_DIV
0x30380001, 	// OP_SYS_CLK_DIV

//720P30fps_configuration
0x30040012, 	// X_ADDR_START
0x30020040, 	// Y_ADDR_START
0x30080519, 	// X_ADDR_END
0x30060317, 	// Y_ADDR_END
0x300A02EE, 	// FRAME_LENGTH_LINES
0x300C0CE4, 	// LINE_LENGTH_PCK
0x3012002D, 	// COARSE_INTEGRATION_TIME
0x30A20001, 	// X_ODD_INC
0x30A60001, 	// Y_ODD_INC
0x30400000, 	// READ_MODE

//Linear Mode Setup
0x30820009,     //Linear mode
0x318C0000, 	// Motion Compensation Off
0x32000000, 	// ADACD Disabled
0x31D00000, 	// COMPANDING disabled

0x30B00000, //DIGITAL_TEST
0x30BA012C, //DIGITAL_CTRL
0x31AC0C0C, //DATA_FORMAT_BITS: 12bit
0x31AE0301, //SERAIL_FORAMT: parallel infterface

0x30641882, 	// no statistic data output    

//0x306Ef010,   // current-drive set
0x306Ee810,   // current-drive set
    
0x301A10DC, //Start streaming

0xFFFF0000  //end of configuration
};



int sensor_rom_30_wdr[] = 
{
//[HDR (Parallel) 720p30 74.25MHz PCLK 24MHz MCLK]

//Reset
0x301A0001, 	// RESET_REGISTER
0x301A10D8, 	// RESET_REGISTER
//Delay=200
0xFFFE00C8,   //delay 200ms

//LOAD=sequencer_hidy_0828_AR0140.i
//LOAD= AR0140 Rev3 Optimized settings
//Delay=100

//[sequencer_hidy_0828_AR0140.i]
0x30888000, 
0x30864558,
0x30866E9B,
0x30864A31,
0x30864342,
0x30868E03,
0x30862714,
0x30864578,
0x30867B3D,
0x3086FF3D,
0x3086FF3D,
0x3086EA27,
0x3086043D,
0x30861027,
0x30860527,
0x30861535,
0x30862705,
0x30863D10,
0x30864558,
0x30862704,
0x30862714,
0x30863DFF,
0x30863DFF,
0x30863DEA,
0x30862704,
0x30866227,
0x3086288E,
0x30860036,
0x30862708,
0x30863D64,
0x30867A3D,
0x30860444,
0x30862C4B,
0x30868F00,
0x30864372,
0x3086719F,
0x30866343,
0x3086166F,
0x30869F92,
0x30861244,
0x30861663,
0x30864316,
0x30869326,
0x30860426,
0x3086848E,
0x30860327,
0x3086FC5C,
0x30860D57,
0x30865417,
0x30860955,
0x30865649,
0x30865F53,
0x30860553,
0x30860728,
0x30866C4C,
0x30860928,
0x30862C72,
0x3086AD7C,
0x3086A928,
0x3086A879,
0x30866026,
0x30869C5C,
0x30861B45,
0x30864845,
0x30860845,
0x30868826,
0x3086BE8E,
0x30860127,
0x3086F817,
0x30860227,
0x3086FA17,
0x3086095C,
0x30860B17,
0x30861026,
0x3086BA5C,
0x30860317,
0x30861026,
0x3086B217,
0x3086065F,
0x30862888,
0x30869060,
0x308627F2,
0x30861710,
0x308626A2,
0x308626A3,
0x30865F4D,
0x30862808,
0x30861927,
0x3086FA84,
0x308669A0,
0x3086785D,
0x30862888,
0x30868710,
0x30868C82,
0x30868926,
0x3086B217,
0x3086036B,
0x30869C60,
0x30869417,
0x30862926,
0x30868345,
0x3086A817,
0x30860727,
0x3086FB17,
0x30862945,
0x3086881F,
0x30861708,
0x308627FA,
0x30865D87,
0x3086108C,
0x30868289,
0x3086170E,
0x30864826,
0x30869A28,
0x3086884C,
0x30860B79,
0x30861730,
0x30862692,
0x30861709,
0x30869160,
0x308627F2,
0x30861710,
0x30862682,
0x30862683,
0x30865F4D,
0x30862808,
0x30861927,
0x3086FA84,
0x308669A1,
0x3086785D,
0x30862888,
0x30868710,
0x30868C80,
0x30868A26,
0x30869217,
0x3086036B,
0x30869D95,
0x30862603,
0x30865C01,
0x30864558,
0x30868E00,
0x30862798,
0x3086170A,
0x30864A65,
0x30864316,
0x30866643,
0x3086165B,
0x30864316,
0x30865943,
0x3086168E,
0x30860327,
0x30869C45,
0x30867817,
0x30860727,
0x30869D17,
0x3086225D,
0x30868710,
0x30862808,
0x3086530D,
0x30868C80,
0x30868A45,
0x30865823,
0x30861708,
0x30868E01,
0x30862798,
0x30868E00,
0x30862644,
0x30865C05,
0x30861244,
0x30864B71,
0x3086759E,
0x30868B85,
0x30860143,
0x30867271,
0x3086A346,
0x30864316,
0x30866FA3,
0x30869612,
0x30864416,
0x30864643,
0x30861697,
0x30862604,
0x30862684,
0x30868E03,
0x308627FC,
0x30865C0D,
0x30865754,
0x30861709,
0x30865556,
0x3086495F,
0x30865305,
0x30865307,
0x3086286C,
0x30864C09,
0x3086282C,
0x308672AE,
0x30867CAA,
0x308628A8,
0x30867960,
0x3086269C,
0x30865C1B,
0x30864548,
0x30864508,
0x30864588,
0x308626BE,
0x30868E01,
0x308627F8,
0x30861702,
0x308627FA,
0x30861709,
0x30865C0B,
0x30861710,
0x308626BA,
0x30865C03,
0x30861710,
0x308626B2,
0x30861706,
0x30865F28,
0x30868898,
0x30866027,
0x3086F217,
0x30861026,
0x3086A226,
0x3086A35F,
0x30864D28,
0x3086081A,
0x308627FA,
0x30868469,
0x3086A578,
0x30865D28,
0x30868887,
0x3086108C,
0x30868289,
0x308626B2,
0x30861703,
0x30866BA4,
0x30866099,
0x30861729,
0x30862683,
0x308645A8,
0x30861707,
0x308627FB,
0x30861729,
0x30864588,
0x30862017,
0x30860827,
0x3086FA5D,
0x30868710,
0x30868C82,
0x30868917,
0x30860E48,
0x3086269A,
0x30862888,
0x30864C0B,
0x30867917,
0x30863026,
0x30869217,
0x3086099A,
0x30866027,
0x3086F217,
0x30861026,
0x30868226,
0x3086835F,
0x30864D28,
0x3086081A,
0x308627FA,
0x30868469,
0x3086AB78,
0x30865D28,
0x30868887,
0x3086108C,
0x3086808A,
0x30862692,
0x30861703,
0x30866BA6,
0x3086A726,
0x3086035C,
0x30860145,
0x3086588E,
0x30860027,
0x30869817,
0x30860A4A,
0x30860A43,
0x3086160B,
0x3086438E,
0x30860327,
0x30869C45,
0x30867817,
0x30860727,
0x30869D17,
0x3086225D,
0x30868710,
0x30862808,
0x3086530D,
0x30868C80,
0x30868A45,
0x30865817,
0x3086088E,
0x30860127,
0x3086988E,
0x30860076,
0x3086AC77,
0x3086AC46,
0x30864416,
0x308616A8,
0x30867A26,
0x3086445C,
0x30860512,
0x3086444B,
0x30867175,
0x3086A24A,
0x30860343,
0x30861604,
0x30864316,
0x30865843,
0x3086165A,
0x30864316,
0x30860643,
0x30861607,
0x30864316,
0x30868E03,
0x3086279C,
0x30864578,
0x30867B17,
0x3086078B,
0x30868627,
0x30869D17,
0x30862345,
0x30865822,
0x30861708,
0x30868E01,
0x30862798,
0x30868E00,
0x30862644,
0x30865C05,
0x30861244,
0x30864B8D,
0x3086602C,
0x30862C2C,
0x30862C00,

//[==== Optimized and Sequencer settings (DO NOT CHANGE) ====]
//[AR0140 Rev3 Optimized Settings]
0x30440400, //Manufacturer-specific
0x3052A134, //Manufacturer-specific
0x3092010F, //Manufacturer-specific
0x30FE0080, //Manufacturer-specific
0x3ECE40FF, //Manufacturer-specific
0x3ED0FF40, //Manufacturer-specific
0x3ED2A906, //Manufacturer-specific
0x3ED4001F, //Manufacturer-specific
0x3ED6638F, //Manufacturer-specific
0x3ED8CC99, //Manufacturer-specific
0x3EDA0888, //Manufacturer-specific
0x3EDE8878, //Manufacturer-specific
0x3EE07744, //Manufacturer-specific
0x3EE24463, //Manufacturer-specific
0x3EE4AAE0, //Manufacturer-specific
0x3EE61400, //Manufacturer-specific
0x3EEAA4FF, //Manufacturer-specific
0x3EEC80F0, //Manufacturer-specific
0x3EEE0000, //Manufacturer-specific
0x31E01701, //Manufacturer-specific

0xFFFE0064, //delay 100ms


//PLL_configuration_Parallel
0x302A0006, 	// VT_PIX_CLK_DIV
0x302C0001, 	// VT_SYS_CLK_DIV
0x302E0004, 	// PRE_PLL_CLK_DIV
0x30300042, 	// PLL_MULTIPLIER
0x3036000C, 	// OP_PIX_CLK_DIV
0x30380001, 	// OP_SYS_CLK_DIV

//720P30fps_configuration
0x30040012, 	// X_ADDR_START
0x30020040, 	// Y_ADDR_START
0x30080519, 	// X_ADDR_END
0x30060317, 	// Y_ADDR_END
0x300A05D4, 	// FRAME_LENGTH_LINES
0x300C0672, 	// LINE_LENGTH_PCK
0x3012002D, 	// COARSE_INTEGRATION_TIME
0x30A20001, 	// X_ODD_INC
0x30A60001, 	// Y_ODD_INC
0x30400000, 	// READ_MODE

//Companding_enabled_16to12
0x31AC100C, 	// DATA_FORMAT_BITS
0x31D00001, 	// COMPANDING

//HDR Mode 16x Setup
0x305E0080, // global_gain
0x30820008,     //HDR mode
0x318CC000, 	// Motion Compensation On
0x320A0080, 	// ADACD_PEDESTAL
0x32060A06, 	// ADACD_NOISE_FLOOR1
0x32060A06, 	// ADACD_NOISE_FLOOR1
0x32081A12, 	// ADACD_NOISE_FLOOR2
0x32081A12, 	// ADACD_NOISE_FLOOR2
0x320200A0, 	// ADACD_NOISE_MODEL1
0x32000002, 	// ADACD_CONTROL
0x31AC100C, 	// DATA_FORMAT_BITS
0x31D00001, 	// COMPANDING
0x318A0E74, 	// HDR_MC_CTRL1
0x31920400, 	// HDR_MC_CTRL5
0x3198183C,   //Motion detect Q1 set to 60, Q2 set to 24
0x318E0800,   //Gain before DLO set to 1
0x31940BB8,   //T1 barrier set to 3000
0x31960E74,   //T2 barrier set to 3700

0x30B00000, //DIGITAL_TEST
0x30BA012C, //DIGITAL_CTRL
0x31AE0301, //SERAIL_FORAMT: parallel infterface

0x30641882, 	// no statistic data output    
//0x306EF010,   // current-drive set
0x306EE810,   // current-drive set

0x301A10DC, //Start streaming

0xFFFF0000  //end of configuration

};


#endif

