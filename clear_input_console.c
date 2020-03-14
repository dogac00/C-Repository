
#include <stdio.h>

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

// if the input is "ali"
// the standard buffer is cleared
