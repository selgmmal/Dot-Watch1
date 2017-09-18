/* 
* tool.c
* set of serveral functions
*
* Author: Tony Hong
*
* Copyright (c) Dot Incorporation.
*/
#include <stdint.h>

#include "tool.h"

#define MAX_INPUT_LENGTH 256

/*
* UTF-8 input data length
*
* parameter
*     uint8_t *input - unsigned int array of input data
* return
*     int - length of input data
*/
int LetterLengthUtf8(uint8_t* input)
{
	int length = 0;

	for (; *input++;)
	{
		length++;
	}

	return length;
}

/*
* UTF-16 input data length
*
* parameter
*     uint16_t *input - unsigned int array of input data
* return
*     int - length of input data
*/
int LetterLengthUtf16(uint16_t* input)
{
	int length = 0;

	for (; *input++;)
	{
		length++;
	}

	return length;
}

/*
* convert UTF-8 data to UTF-16 data
*
* parameter
*     uint8_t *utf8 - unsigned int array of UTF-8 data
*     uint16_t *utf16 - unsigned int array of UTF-16 data
*/
void Utf8IntoUtf16(uint8_t* utf8, uint16_t* utf16)
{
	uint8_t inputUtf8[MAX_INPUT_LENGTH] = { 0 };
	int i = 0;
	int utf8Length = LetterLengthUtf8(utf8);

	do
	{
		inputUtf8[i] = *utf8;
		i++;
	} while (*utf8++ != 0);

	for (i = 0; i < utf8Length; i++)
	{
		if (inputUtf8[i] <= 0x7F)
		{
			*utf16++ = inputUtf8[i];
		}
		else if ((inputUtf8[i] >= 0xC0 && inputUtf8[i] <= 0xDF) && (inputUtf8[i + 1] >= 0 && inputUtf8[i + 1] <= 0xBF))
		{
			unsigned short temp = 0x00;

			temp = temp | (0x1f & inputUtf8[i]);
			temp = temp << 6;
			temp = temp | (0x3f & inputUtf8[i + 1]);

			*utf16++ = temp;

			i = i + 1;
		}
		else if ((inputUtf8[i] >= 0xE0 && inputUtf8[i] <= 0xEF) && (inputUtf8[i + 1] >= 0x80 && inputUtf8[i + 1] <= 0xBF) && (inputUtf8[i + 2] >= 0x80 && inputUtf8[i + 2] <= 0xBF))
		{
			unsigned short temp = 0x00;

			temp = temp | (0x0f & inputUtf8[i]);
			temp = temp << 6;
			temp = temp | (0x3f & inputUtf8[i + 1]);
			temp = temp << 6;
			temp = temp | (0x3f & inputUtf8[i + 2]);

			*utf16++ = temp;

			i = i + 2;
		}
	}
}

/*
* Return Language Type of given language code
*
* parameter
*     uint8_t languageCode - language code  
* return
*     Language - language type
*/
Language LanguageType(uint8_t languageCode)
{
	if (languageCode == 2)
	{
		return KOREAN;
	}
	else 
	{
		return ENGLISH;
	}
}