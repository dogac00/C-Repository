/*


In this Kata, you will be given two strings a and b and your task will be to return the characters that are not common in the two strings.

For example:

solve("xyab","xzca") = "ybzc" 
--The first string has 'yb' which is not in the second string. 
--The second string has 'zc' which is not in the first string. 
Notice also that you return the characters from the first string concatenated with those from the second string.

More examples in the tests cases.

Good luck!

Please also try Simple remove duplicates


*/

// here is my first and simple solution
// this solution is O(N^2)
// of course, there are so much faster
// implementations than this one

#include <stdlib.h>
#include <string.h>

char *solve(const char *a, const char *b) {
  size_t len1 = strlen(a);
  size_t len2 = strlen(b);
  char* unique = (char*) malloc(len1 + len2 + 1);
  char* tmp = unique;
  
  for (size_t i = 0; i < len1; i++)
    if (!strchr(b, a[i]))
      *unique++ = a[i];
  for (size_t i = 0; i < len2; i++)
    if (!strchr(a, b[i]))
      *unique++ = b[i];
  
  *unique = '\0';
  return tmp;
}

// My better and O(N) solution is this:
// But since the question wants them in the x and y order
// this solution did not work for me
// But it works in general cases

#include <stdlib.h>
#include <string.h>

#define CHAR_COUNT       256

char *solve(const char *a, const char *b) {
  char* unique = (char*) malloc(strlen(a) + strlen(b) + 1);
  char* tmp = unique;
  int cnt_table[CHAR_COUNT] = { 0 };
  
  while (*a)
    cnt_table[*a++]++;
  while (*b)
    cnt_table[*b++]++;
    
  for (int i = 0; i < CHAR_COUNT; i++)
    if (cnt_table[i] == 1)
      *unique++ = (char) i;
  *unique = '\0';
  
  return tmp;
}



