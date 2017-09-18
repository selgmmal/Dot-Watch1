/* 
* dot_watch_firmware.h
* dot_watch_firmware header file
* variables that user can be selected
*
* Author: Tony Hong
*
* Copyright (c) Dot Incorporation.
*/
#ifndef __DOTWATCHFIRMWARE_H__
#define __DOTWATCHFIRMWARE_H__
#include <stdint.h>

// Major Language(1: English, 2: Korean, ...)
extern	uint8_t	majorLanguage;

// 1st language code(e.g. English: 0x05)
extern	uint8_t	language1st;

// 1st language rule(in case of several braille rules, 1-3, e.g. English: 1 - EBAE, 2 - UEB, 3 - SEB)
extern	uint8_t	languageRule1st;

// 1st language grade(initial Grade, user can select grade on mobile application, 1 - 3)
extern	uint8_t	languageGrade1st;

// 2nd language code(e.g. Korean: 0x0A)
extern	uint8_t	language2nd;

// 2nd language rule(in case of several braille rules, 1-3)
extern	uint8_t	languagebRule2nd;

// 2nd language grade(initial Grade, user can select grade on mobile application, 1 - 3)
extern	uint8_t	languageGrade2nd;

#endif