
#include <stdio.h>

// unfortunately, there are no standard input buffer clearing function in c
// so we have to write it ourselves

void clear_input_buffer()
{
  int c;
  
  while ((c = getchar()) != '\n' && c != EOF)
    ;
}

int main()
{
  int n;
  
  scanf("%d", &n);
  
  clear_input_buffer();
}

// if the input is ex: "123763ALI"
// the standard buffer is cleared with this function call
