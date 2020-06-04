
// I solve this problem in codewars.com
// Down below for the second implementation of mine

#include <stdlib.h>
#include <string.h>

const char * vowels = "aeiou";
const char * numbers = "12345";

char *encode(const char *string) {
  char* enc = malloc(sizeof(char) * strlen(string) + 1);
  char* tmp = enc;
  
  while (*string) {
    char* chp = strchr(vowels, *string);
    if (chp)
      *enc++ = numbers[chp - vowels];
    else
      *enc++ = *string;
    
    string++;
  }
  
  *enc = '\0';
  
  return tmp;
}

char *decode(const char *string) {
  char* dec = malloc(sizeof(char) * strlen(string) + 1);
  char* tmp = dec;
  
  while (*string) {
    char* chp = strchr(numbers, *string);
    if (chp)
      *dec++ = vowels[chp - numbers];
    else
      *dec++ = *string;
      
    string++;
  }
  
  *dec = '\0';
  
  return tmp;
}

// here is the second implementation:

#include <stdlib.h>
#include <string.h>

char *encode(const char *string) {
  char* enc = malloc(sizeof(char) * strlen(string) + 1);
  size_t cnt = 0;
  
  while (*string) {
    if (*string == 'a') {
      enc[cnt] = '1';
    }
    else if (*string == 'e') {
      enc[cnt] = '2';
    }
    else if (*string == 'i') {
      enc[cnt] = '3';
    }
    else if (*string == 'o') {
      enc[cnt] = '4';
    }
    else if (*string == 'u') {
      enc[cnt] = '5';
    }
    else {
      enc[cnt] = *string;
    }
    
    string++;
    cnt++;
  }
  
  enc[cnt] = '\0';
  
  return enc;
}

char *decode(const char *string) {
  char* dec = malloc(sizeof(char) * strlen(string) + 1);
  size_t cnt = 0;
  
  while (*string) {
    if (*string == '1') {
      dec[cnt] = 'a';
    }
    else if (*string == '2') {
      dec[cnt] = 'e';
    }
    else if (*string == '3') {
      dec[cnt] = 'i';
    }
    else if (*string == '4') {
      dec[cnt] = 'o';
    }
    else if (*string == '5') {
      dec[cnt] = 'u';
    }
    else {
      dec[cnt] = *string;
    }
    
    string++;
    cnt++;
  }
  
  dec[cnt] = '\0';
  
  return dec;
}
