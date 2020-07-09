
#include <stdbool.h>

#define XOR(a, b)    (!!(a) != !!(b))

int main(int argc, char** argv)
{
  int r1 = XOR(true, false);
  int r2 = XOR(true, true);
  int r3 = XOR(false, false);
  int r4 = XOR(false, true);
  
  printf("%d %d %d %d\n", r1, r2, r3, r4);
}
