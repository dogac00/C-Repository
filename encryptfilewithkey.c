#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_numeric(const char* str)
{
 while (isspace(*str))
   str++;
  
 if (*str == '+' || *str == '-')
   str++;
 
 while (*str)
 {
  if (!isdigit(*str))
   break;
  str++;
 }
 
 while (isspace(*str))
   str++;

 return !*str;
}

int main(int argc, char** argv) {
 if (argc != 3)
 {
  fprintf(stderr, "usage is : <enc> <file> <key>\n");
  return 1;
 }

 if (!is_numeric(argv[2]))
 {
  fprintf(stderr, "given key must be numeric\n");
  return 2;
 }

 FILE *fs, *fd;
 char tmp_name[L_tmpnam];
 int ch, key;
 
 if ((fs = fopen(argv[1], "r")) == NULL)
 {
  fprintf(stderr, "file could not be opened\n");
  return 3;
 }

 tmpnam(tmp_name);
 key = atoi(argv[2]);

 if ((fd = fopen(tmp_name, "w")) == NULL)
 {
  fprintf(stderr, "temporary file could not be opened.\n");
  return 4;
 }
 
 while ((ch = fgetc(fs)) != EOF)
  fputc(ch ^ key, fd);
  
 fclose(fs);
 fclose(fd);

 if (remove(argv[1]))
 {
  fprintf(stderr, "temp file could not be removed\n");
  return 5;
 }
 if (rename(tmp_name, argv[1]))
 {
  fprintf(stderr, "renaming a file could not be successful\n");
  return 6;
 }
 
 return EXIT_SUCCESS;
}
