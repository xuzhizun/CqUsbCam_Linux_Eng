#ifndef _SENSORCAPBABLITY_H_
#define _SENSORCAPBABLITY_H_

/****************************************************************************************\
 * This is the header file for the Caiqi usb camera for Linux/Mac						*
 *                                                                                	*
 * Author              :        nxb     											* 												
 * License             :        GPL Ver 2.0                                       	*
 * Copyright           :        Caiqi Electronics Inc.								*
 * Date written        :        nov 05, 2017                                    	*
 * Modification Notes  :                                                          	*
 *    1. nxb, nov 05, 2017                                  						*
 *       Add documentation.                                          				*
 *                      															*
 *                                                                                	*
 \***************************************************************************************/


 #define RESOLU_1280_720 				0x80
 #define RESOLU_1280_960 				0x81
 #define RESOLU_640_480_SKIP 				0x82
 #define RESOLU_640_480_BIN 				0x83
 #define RESOLU_640_480 				0x84
 #define RESOLU_752_480 				0x85
 #define RESOLU_1280_1024 				0x86
 #define RESOLU_1280_800 				0x87

 
 #define TRIGMODE_AUTO					0x90
 #define TRIGMODE_FPGA					0x91
 #define TRIGMODE_SOFT					0x92  
 #define TRIGMODE_SIGNAL				0x93
  
 #define ANALOGGAIN_1X					0x98
 #define ANALOGGAIN_2X					0x99
 #define ANALOGGAIN_4X					0x9A
 #define ANALOGGAIN_8X					0x9B  
 #define ANALOGGAIN_16X					0x9C
 #define ANALOGGAIN_32X					0x9D
 #define ANALOGGAIN_64X					0x9E  
 
 #define USBTYPE_20						0xA0
 #define USBTYPE_30						0xA1 
 #define USB_SPEED_HIGH					0xA2
 #define USB_SPEED_SUPER				0xA3

 
 #define MIRROR_NORMAL					0xA8
 #define MIRROR_X						0xA9
 #define MIRROR_Y						0xAA
 #define MIRROR_XY						0xAB
 
 #define BITDEPTH_8						0xAC
 #define BITDEPTH_16					0xAD 
 #define BITDEPTH_16_2					0xAE 



#endif
