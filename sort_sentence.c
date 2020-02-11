#include <stdio.h>
#include <string.h>

#define bool int
#define true 1
#define false 0

void test();

void swap(char *a, char *b) {
  char temp = *a;
  *a = *b;
  *b = temp;
}

void bubble_sort(char arr[], int beginIndex, int endIndex) {
  int sorted;

  do {
    sorted = 1;
    for (int i = beginIndex; i < endIndex - 1; ++i) {
      if (arr[i + 1] < arr[i]) {
        swap(&arr[i], &arr[i + 1]);
        sorted = 0;
      }
    }
  } while (!sorted);
}

void sort_with_length(char sentence[], int length) {
  int beginIndex = 0;
  for (int i = 0; i < length; ++i) {
    if (sentence[i] == ' ') {
      bubble_sort(sentence, beginIndex, i);
      beginIndex = i;
    }
  }

  bubble_sort(sentence, beginIndex, length);
}

void sort(char sentence[]) {
  sort_with_length(sentence, strlen(sentence));
}

int main(void) {
  test();

  return 0;
}

// Tests

bool check_if_two_arrays_same(char arr1[], int len1, char arr2[], int len2) {
  if (len1 != len2) {
    return false;
  }

  for (int i = 0; i < len1; ++i) {
    if (arr1[i] != arr2[i]) {
      return false;
    }
  }

  return true;
}

void test() {
  char input1[] = "letshandle twowords";
  char test1[] = "adeehllnst doorstww";

  char input2[] = "three words trickier";
  char test2[] = "eehrt dorsw ceiikrrt";

  char input3[] = "four words are enough";
  char test3[] = "foru dorsw aer eghnou";

  char input4[] = "singlewordinput";
  char test4[] = "degiilnnoprstuw";

  char input5[] = "same same same same";
  char test5[] = "aems aems aems aems";

  char input6[] = "random input sequence";
  char test6[] = "admnor inptu ceeenqsu";

  sort(input1);
  sort(input2);
  sort(input3);
  sort(input4);
  sort(input5);
  sort(input6);

  if (check_if_two_arrays_same(input1, strlen(input1), test1, strlen(test1))) {
    printf("First Test: True!\n");
  }
  
  if (check_if_two_arrays_same(input2, strlen(input2), test2, strlen(test2))) {
    printf("Second test: True!\n");
  }

  if (check_if_two_arrays_same(input3, strlen(input3), test3, strlen(test3))) {
    printf("Third test: True!\n");
  }

  if (check_if_two_arrays_same(input4, strlen(input4), test4, strlen(test4))) {
    printf("Fourth Test: True!\n");
  }
  
  if (check_if_two_arrays_same(input5, strlen(input5), test5, strlen(test5))) {
    printf("Fifth test: True!\n");
  }

  if (check_if_two_arrays_same(input6, strlen(input6), test6, strlen(test6))) {
    printf("Sixth test: True!\n");
  }
}
