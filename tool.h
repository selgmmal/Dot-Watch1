/*
* tool.h
* tool header file
*
* Author: Tony Hong
*
* Copyright (c) Dot Incorporation.
*/
#ifndef __TOOL_H__
#define __TOOL_H__
#include <stdint.h>

// language type
typedef enum LanguageClass
{
	ENGLISH,
	KOREAN
} Language;

// UTF-8 input data length
int LetterLengthUtf8(uint8_t* input);

// UTF-16 input data length
int LetterLengthUtf16(uint16_t* input);

// convert UTF-8 data to UTF-16 data
void Utf8IntoUtf16(uint8_t* utf8, uint16_t* utf16);

// Return Language Type of given language code
Language LanguageType(uint8_t languageCode);

#endif