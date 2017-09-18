/*
* dot_watch_firmware.c
* set of several variables that can be selected by user in mobile application  
*
* Author: Tony Hong
*
* Copyright (c) Dot Incorporation.
*/
#include "dot_watch_firmware.h"

// Major Language(1: English, 2: Korean, ...)
uint8_t	majorLanguage = 1;

// 1st language code(e.g. English: 0x05)
uint8_t	language1st = 0x05;

// 1st language rule(in case of several braille rules, 1-3, e.g. English: 1 - EBAE, 2 - UEB, 3 - SEB)
uint8_t	languageRule1st = 1;

// 1st language grade(initial Grade, user can select grade on mobile application, 1 - 3)
uint8_t	languageGrade1st = 1;

// 2nd language code(e.g. Korean: 0x0A)
uint8_t	language2nd = 0x0A;

// 2nd language rule(in case of several braille rules, 1-3)
uint8_t	languagebRule2nd = 1;

// 2nd language grade(initial Grade, user can select grade on mobile application, 1 - 3)
uint8_t	languageGrade2nd = 1;