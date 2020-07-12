
// I solved this question on codewars.com

// check whether any odd bit of x is 1
// it should return 1 if odd bit equal to 1 exists, 0 otherwise

int any_odd(unsigned x) {
  int cnt = 0;
  
  while (x) {
    if ((cnt++ & 1) && (x & 1))
      return 1;
    x >>= 1;
  }
  
  return 0;
}
