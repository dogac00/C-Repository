#include <stdio.h>

void swap(int *a, int *b) {
  const int temp = *a;
  *a = *b;
  *b = temp;
}

void bubble_sort(int arr[], int length) {
  
  for (int i = 0; i < length - 1; ++i) {
    for (int j = 0; j < length - i - 1; ++j) {
      if (arr[j + 1] < arr[j]) {
        swap(&arr[j], &arr[j + 1]);
      }
    }
  }
}

int kth_greatest_element(int arr[], int length, int k) {
  if (k <= 0 || k > length) {
    return 0;
  }

  bubble_sort(arr, length);

  return arr[length - k];
}

int main(void) {
  int arr[] = {4, 3, 2, 1};

  printf("%d", kth_greatest_element(arr, 4, 4));

  return 0;
}
