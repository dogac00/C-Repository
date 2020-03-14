#include <stdio.h>
#include <string.h>

#define str_equals(str1, str2)     (strcmp((str1), (str2)) == 0)

void run_tests();

void swap(char* a, char* b) {
	const char temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(char arr[], const unsigned beginIndex, const unsigned endIndex) {
    int sorted;

    do {
        sorted = 1;
        for (unsigned i = beginIndex; i < endIndex - 1; ++i) {
            if (arr[i + 1] < arr[i]) {
                swap(&arr[i], &arr[i + 1]);
                sorted = 0;
            }
        }
    } while (!sorted);
}

void sort(char sentence[]) {
    int beginIndex = 0;
    const unsigned length = strlen(sentence);
    for (unsigned i = 0; i < length; ++i) {
        if (sentence[i] == ' ') {
            bubble_sort(sentence, beginIndex, i);
            beginIndex = i;
        }
    }

    bubble_sort(sentence, beginIndex, length);
}

int main(void) {
    run_tests();

    return 0;
}

// Tests

void test_result(const char* input, const char* test, const char* successString, const char* failString)
{
    if (str_equals(input, test))
        printf("%s\n", successString);
    else
        printf("%s\n", failString);
}

void run_tests() {
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

    test_result(input1, test1, "First Test Successful", "First Test Failure");
    test_result(input2, test2, "Second Test Successful", "Second Test Failure");
    test_result(input3, test3, "Third Test Successful", "Third Test Failure");
    test_result(input4, test4, "Fourth Test Successful", "Fourth Test Failure");
    test_result(input5, test5, "Fifth Test Successful", "Fifth Test Failure");
    test_result(input6, test6, "Sixth Test Successful", "Sixth Test Failure");
}
