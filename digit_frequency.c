#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// solution to a problem from hackerrank

int main() {

    char str[1200];
    scanf("%s", str);
    const char* ptr = str;

    int arr[10] = { 0 };

    while (*ptr) {
        if (isdigit(*ptr)) {
            int d = *ptr - '0';
            arr[d]++;
        }
        ptr++;
    }

    for (size_t i = 0; i < 10; i++)
        printf("%d ", arr[i]);
  
    return 0;
}
