/*
 * ClassIDs.h
 *
 *  Created on: 23.11.2021
 *      Author: Yannick
 */

#ifndef USEREXTENSIONS_INC_CLASSIDS_H_
#define USEREXTENSIONS_INC_CLASSIDS_H_

// Type IDs
enum class ClassType : uint16_t {
	NONE=0,
	Mainclass=1,
	Internal=2,
	Motordriver=3,
	Buttonsource=4,
	Analogsource=5,
	Encoder=6,
	Axis,
	Extension
};



// Unique class IDs
#define CLSID_NONE			0	// Undefined IDs or failsafe main
#define CLSID_MAIN_FFBWHEEL 0x1
#define CLSID_MAIN_TMCDBG 	0xB
#define CLSID_MAIN_CAN	 	0xC
#define CLSID_MAIN_MIDI 	0xD

// Button sources for gamepad
#define CLSID_BTN_NONE		0x20
#define CLSID_BTN_LOCAL 	0x21
#define CLSID_BTN_SPI	 	0x22
#define CLSID_BTN_SHIFTER 	0x23

// Analog sources
#define CLSID_ANALOG_NONE 	0x40
#define CLSID_ANALOG_LOCAL 	0x41

// Encoders
#define CLSID_ENCODER_NONE	0x60
#define CLSID_ENCODER_LOCAL	0x61
#define CLSID_ENCODER_MTSPI	0x62
#define CLSID_ENCODER_BISS	0x63

// Motordrivers
#define CLSID_MOT_NONE		0x80
#define CLSID_MOT_TMC0		0x81
#define CLSID_MOT_TMC1		0x82
#define CLSID_MOT_TMC2		0x83
#define CLSID_MOT_PWM		0x84
#define CLSID_MOT_ODRV0		0x85
#define CLSID_MOT_ODRV1		0x86
#define CLSID_MOT_VESC		0x84

// Internal classes
#define CLSID_AXIS			0xA01
#define CLSID_EFFECTSCALC	0xA02


#endif /* USEREXTENSIONS_INC_CLASSIDS_H_ */
