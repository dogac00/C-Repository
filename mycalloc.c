
#include <string.h>
#include <stdlib.h>

void* mycalloc(size_t cnt, size_t size)
{
  void* ptr = malloc(cnt * size);
  
  if (!ptr)
    return NULL;
    
  return memset(ptr, 0, cnt * size);
}

int main()
{
  int * p = calloc(10, sizeof(int));
  // Here we allocate 10 integers in the heap
}
