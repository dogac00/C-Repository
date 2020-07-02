
// problem is to find the remainder of a number
// if it is divided by 4
// since the mod operator is slow in C/C++
// we can do it with bitwise operators

#include <stdio.h>

// we should get last two bits
// they are enough to check the remainder
// we can bitwise and the number with 100 in binary
int remainder_by_four(int num)
{
  return num & 4;
}

#define PRINT_REMAINDER(i)  printf(#i " % 4 = %d\n", remainder_by_four(i))

int main()
{
  PRINT_REMAINDER(3);
  PRINT_REMAINDER(445);
  PRINT_REMAINDER(2123);
  PRINT_REMAINDER(45789);
  PRINT_REMAINDER(200);
}
