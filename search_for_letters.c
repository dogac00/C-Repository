/*

Create a function which accepts one arbitrary string as an argument, and return a string of length 26.

The objective is to set each of the 26 characters of the output string to either '1' or '0' based on the fact whether the Nth letter of the alphabet is present in the input (independent of its case).

So if an 'a' or an 'A' appears anywhere in the input string (any number of times), set the first character of the output string to '1', otherwise to '0'. if 'b' or 'B' appears in the string, set the second character to '1', and so on for the rest of the alphabet.

For instance:

"a   **&  cZ"  =>  "10100000000000000000000001"

*/

#include <stdlib.h>
#include <string.h>

#define LETTER_COUNT           26
#define IDX(ch)     ((((ch) > 90) ? (ch - 32) : (ch)) - 65)

char *change(const char *str_in) {
  char* str_out = (char*) malloc(LETTER_COUNT + 1);
  memset(str_out, '0', LETTER_COUNT);
  
  while (*str_in) {
    int i = IDX(*str_in);
    
    if (i >= 0 && i <= LETTER_COUNT)
      str_out[i] = '1';
    
    str_in++;
  }
  
  str_out[LETTER_COUNT] = '\0';
  
  return str_out;
}
