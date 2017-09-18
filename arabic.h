/*
* arabic.h
* arabic header file
*
* Author: Tony Hong
*
* Copyright (c) Dot Incorporation.
*/
#ifndef __ARABIC_H__
#define __ARABIC_H__
#include <stdint.h>

// letter type
typedef enum Letter
{
	NOCHAR,
	ARABICCHARACTER,
	PUNCTUATIONMARKS,
	NUMERAL,
} LETTER;

// Determine letter type of given character
LETTER LetterType(uint16_t *input);

// translate upper/lower case alphabet, abbreviations using appropriate braille rule
int Arabic(uint16_t *input, uint8_t *brailleCode);

// translate punctuation mark into braille code using appropriate braille rule
int PunctuationMarks(uint16_t *input, uint8_t *brailleCode);

// translate numeric letters into braille code using appropriate braille rule
int Numeral(uint16_t *input, uint8_t *brailleCode);

// translate Roman English, punctuation mark, numeral letter, etc into braille code using appropriate braille rule
int ArabicTranslateIntoBraille(uint16_t *input, uint8_t *brailleCode);

#endif
