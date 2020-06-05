// For c the function should return false if no non consecutive numbers are found
// It should return true if one is found and the pointer arg first set to the value

#include <stdbool.h>

bool firstNonConsecutive (const int arr[], const int length, int *first) {

  for (int i = 0; i < length - 1; i++) {
    if (arr[i] + 1 != arr[i + 1])
    {
      *first = arr[i + 1];
      return true;
    }
  }
  return false;
}
