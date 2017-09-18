/*
* Arabic.c
* Main of Arabic Braille Engine
*
* Author: Tony Hong
*
* Copyright (c) Dot Incorporation.
*/
#include "dot_watch_firmware.h"
#include "tool.h"
#include "arabic.h"

#define SINGLE_CHARACTER_LENGTH 1

/*
* Determine letter type of given character
*
* parameter
*     uint16_t *input - input code
* return
*     LETTER - letter type
*/
LETTER LetterType(uint16_t *input)
{
    // Arabic
    if ((*input >= 0x0041 && *input <= 0x005A) || (*input >= 0x0061 && *input <= 0x007A))
    {
        return ARABICCHARACTER;
    }
    // punuctutaion mark
    // else if
    // {
            // return PUNCTUATIONMARKS;
    // }
    // numeral letter
    // else if
    // {
            // return NUMERAL;
    // }

    return NOCHAR;
}

/*
* translate upper/lower case alphabet, abbreviations using appropriate braille rule
*
* parameter
*     uint16_t *input - arabic letter to translate
*     uint8_t *brailleCode - translated braille code
* return
*     int - translated braille code length
*/
int Arabic(uint16_t *input, uint8_t *brailleCode)
{
    // ا
    if (*input == 0x0627)
    {
        *brailleCode++ = 0x01;

        return SINGLE_CHARACTER_LENGTH;
    }
    // أ
            else if (*input == 0x0623)
            {
                *brailleCode++ = 0x0C;

                return SINGLE_CHARACTER_LENGTH;
            }
       // إ
                  else if (*input == 0x0625)
                  {
                      *brailleCode++ = 0x28;

                      return SINGLE_CHARACTER_LENGTH;
                  }

       // آ
               else if (*input == 0x0622)
               {
                   *brailleCode++ = 0x1C;

                   return SINGLE_CHARACTER_LENGTH;
               }
         // ء
               else if (*input == 0x0621)
               {
                   *brailleCode++ = 0x04;

                   return SINGLE_CHARACTER_LENGTH;
               }
    // ب
    else if (*input == 0x0628)
    {
        *brailleCode++ = 0x03;

        return SINGLE_CHARACTER_LENGTH;
    }
    // ت
    else if (*input == 0x062A)
    {
        *brailleCode++ = 0x1E;

        return SINGLE_CHARACTER_LENGTH;
    }
    // ث
       else if (*input == 0x062B)
    {
           *brailleCode++ = 0x39;

           return SINGLE_CHARACTER_LENGTH;
    }
    // ج
    else if (*input == 0x062C)
    {
        *brailleCode++ = 0x1A;

        return SINGLE_CHARACTER_LENGTH;
    }
    // ح
    else if (*input == 0x062D)
    {
        *brailleCode++ = 0x31;

        return SINGLE_CHARACTER_LENGTH;
    }
    // خ
    else if (*input == 0x062E)
    {
         *brailleCode++ = 0x2D;

        return SINGLE_CHARACTER_LENGTH;
    }
    // د
    else if (*input == 0x062F)
    {
        *brailleCode++ = 0x19;

        return SINGLE_CHARACTER_LENGTH;
    }
    // ذ
    else if (*input == 0x0630)
    {
        *brailleCode++ = 0x2E;

        return SINGLE_CHARACTER_LENGTH;
    }
    // ر
    else if (*input == 0x0631)
    {
        *brailleCode++ = 0x17;

        return SINGLE_CHARACTER_LENGTH;
    }
    // ز
    else if (*input == 0x0632)
    {
        *brailleCode++ = 0x35;

        return SINGLE_CHARACTER_LENGTH;
    }
    // س
    else if (*input == 0x0633)
    {
        *brailleCode++ = 0x0E;

        return SINGLE_CHARACTER_LENGTH;
    }
    // ش
    else if (*input == 0x0634)
    {
        *brailleCode++ = 0x29;

        return SINGLE_CHARACTER_LENGTH;
    }
    // ص
    else if (*input == 0x0635)
    {
        *brailleCode++ = 0x2F;

        return SINGLE_CHARACTER_LENGTH;
    }
    // ض
    else if (*input == 0x0636)
    {
        *brailleCode++ = 0x2B;

        return SINGLE_CHARACTER_LENGTH;
    }
    // ط
    else if (*input == 0x0637)
    {
        *brailleCode++ = 0x3E;

        return SINGLE_CHARACTER_LENGTH;
    }
    // ظ
    else if (*input == 0x0638)
    {
        *brailleCode++ = 0x3F;

        return SINGLE_CHARACTER_LENGTH;
    }
    // ع
    else if (*input == 0x0639)
    {
        *brailleCode++ = 0x37;

        return SINGLE_CHARACTER_LENGTH;
    }
    // غ
    else if (*input == 0x063A)
    {
        *brailleCode++ = 0x23;

        return SINGLE_CHARACTER_LENGTH;
    }
    // ف
    else if (*input == 0x0641)
    {
        *brailleCode++ = 0x0B;

        return SINGLE_CHARACTER_LENGTH;
    }
    // ق
    else if (*input == 0x0642)
    {
        *brailleCode++ = 0x1F;

        return SINGLE_CHARACTER_LENGTH;
    }
    // ك
    else if (*input == 0x0643)
    {
        *brailleCode++ = 0x05;

        return SINGLE_CHARACTER_LENGTH;
    }
    // ل
    else if (*input == 0x0644)
    {
        *brailleCode++ = 0x07;

        return SINGLE_CHARACTER_LENGTH;
    }
    // م
    else if (*input == 0x0645)
    {
        *brailleCode++ = 0x0D;

        return SINGLE_CHARACTER_LENGTH;
    }
    // ن
    else if (*input == 0x0646)
    {
        *brailleCode++ = 0x1D;

        return SINGLE_CHARACTER_LENGTH;
    }
    // ه
    else if (*input == 0x0647)
    {
        *brailleCode++ = 0x13;

        return SINGLE_CHARACTER_LENGTH;
    }
    // ة
    else if (*input == 0x0629)
    {
        *brailleCode++ = 0x21;

        return SINGLE_CHARACTER_LENGTH;
    }
    // و
    else if (*input == 0x0648)
    {
        *brailleCode++ = 0x3A;

        return SINGLE_CHARACTER_LENGTH;
    }
  // ؤ
    else if (*input == 0x0624)
    {
        *brailleCode++ = 0x33;

        return SINGLE_CHARACTER_LENGTH;
    }
    // ى
      else if (*input == 0x0649)
      {
          *brailleCode++ = 0x15;

          return SINGLE_CHARACTER_LENGTH;
      }
    // ي
              else if (*input == 0x064A)
              {
            	     *brailleCode++ = 0x0A;

                  return SINGLE_CHARACTER_LENGTH;
              }
      //ئ
              else if (*input == 0x0626)
              {
                  *brailleCode++ = 0x3D;

                  return SINGLE_CHARACTER_LENGTH;
              }


    else
    {
        return 0;
    }
    // ...
}


/*
* translate punctuation mark into braille code using appropriate braille rule
*
* parameter
*     uint16_t *input - punctuation mark letter
*     uint8_t *brailleCode - translated braille code
* return
*     int - translated braille code length
*/
int PunctuationMarks(uint16_t *input, uint8_t *brailleCode)
{


	 // .
	    if (*input == 0x002E)
	    {
	        *brailleCode++ = 0x32;

	        return SINGLE_CHARACTER_LENGTH;
	    }
	    // ،
	            else if (*input == 0x060C)
	            {
	                *brailleCode++ = 0x10;

	                return SINGLE_CHARACTER_LENGTH;
	            }

	    // ؛
	  	            else if (*input == 0x061B)
	  	            {
	  	                *brailleCode++ = 0x30;

	  	                return SINGLE_CHARACTER_LENGTH;
	  	            }
	    // ؟
	  	            else if (*input == 0x061F)
	  	            {
	  	                *brailleCode++ = 0x26;

	  	                return SINGLE_CHARACTER_LENGTH;
	  	            }
	    // !
	  	            else if (*input == 0x0021)
	  	            {
	  	                *brailleCode++ = 0x16;

	  	                return SINGLE_CHARACTER_LENGTH;
	  	            }

	  else
	     {
	      return 0;
	      }
}

/*
* translate numeric letters into braille code using appropriate braille rule
*
* parameter
*     uint16_t *input - numeral letter
*     uint8_t *brailleCode - translated braille code
* return
*     int - translated braille code length
*/
int NUMERAL (uint16_t *input, uint8_t *brailleCode)
{

	 // صفر
		    if (*input == 0x06F0)
		    {
		        *brailleCode++ = 0x32;

		        return SINGLE_CHARACTER_LENGTH;
		    }
		    // 1
		            else if (*input == 0x06F1)
		            {
		                *brailleCode++ = 0x10;

		                return SINGLE_CHARACTER_LENGTH;
		            }
		    // 2
				            else if (*input == 0x06F2)
				            {
				                *brailleCode++ = 0x10;

				                return SINGLE_CHARACTER_LENGTH;
				            }
		    // 3
				            else if (*input == 0x06F3)
				            {
				                *brailleCode++ = 0x10;

				                return SINGLE_CHARACTER_LENGTH;
				            }
		    // 4
				            else if (*input == 0x06F4)
				            {
				                *brailleCode++ = 0x10;

				                return SINGLE_CHARACTER_LENGTH;
				            }
		    // 5
				            else if (*input == 0x06F5)
				            {
				                *brailleCode++ = 0x10;

				                return SINGLE_CHARACTER_LENGTH;
				            }
		    // 6
				            else if (*input == 0x06F6)
				            {
				                *brailleCode++ = 0x10;

				                return SINGLE_CHARACTER_LENGTH;
				            }
		    // 7
				            else if (*input == 0x06F7)
				            {
				                *brailleCode++ = 0x10;

				                return SINGLE_CHARACTER_LENGTH;
				            }
		    // 8
				            else if (*input == 0x06F8)
				            {
				                *brailleCode++ = 0x10;

				                return SINGLE_CHARACTER_LENGTH;
				            }
		    // 9
				            else if (*input == 0x06F9)
				            {
				                *brailleCode++ = 0x10;

				                return SINGLE_CHARACTER_LENGTH;
				            }

		            else
		           	     {
		           	      return 0;
		           	      }
}

/*
* translate Roman arabic, punctuation mark, numeral letter, etc into braille code using appropriate braille rule
*
* parameter
*     uint16_t *input - string to translate
*     uint8_t *brailleCode - translated braille code
* return
*     int - translated braille code length
*/
int ArabicTranslateIntoBraille(uint16_t *input, uint8_t *brailleCode)
{
    // braille code length
    int brailleCodeLength = 0; 

    // grade 1
    if (languageGrade1st == 1)
    {
        int inputLength = LetterLengthUtf16(input);

        for (int i = 0; i < inputLength; i++)
        {
            switch (LetterType(input))
            {
            // Roman(Arabic)
            case ARABICCHARACTER:
                brailleCodeLength = brailleCodeLength + Arabic(input, (brailleCode + brailleCodeLength));
                break;

            // punctuation mark
            case PUNCTUATIONMARKS:
                brailleCodeLength = brailleCodeLength + PunctuationMarks(input, brailleCode);
                break;

            // numeral
            case NUMERAL:
                brailleCodeLength = brailleCodeLength + Numeral(input, brailleCode);
                break;

            // untranslatable or invalid letter
            case NOCHAR:
            default:
                break;
            }

            // shift
            *input++;
        }
    }
    //grade 2
    else if (languageGrade1st == 2)
    {
        // ...
    }

    // return braille code length
    return brailleCodeLength;
}
