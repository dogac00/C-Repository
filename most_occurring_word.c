#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ht.h"

#define MAX_WORD_LEN     1024

/*
 * Caller must call free on returned string
 * */
char* find_most_occurring_word(const char* sentence) {
    if (!sentence)
        return NULL;
    if (*sentence == '\0')
        return strdup("");

    ht* words_to_counts;
    char* ptr_word;
    int* ptr_cur_count;
    const char* sep = " ";

    words_to_counts = ht_create();
    if (!words_to_counts) {
        fprintf(stderr, "out of memory");
        exit(EXIT_FAILURE);
    }

    char* dup_sentence = strdup(sentence);

    // tokenize sentence into words
    ptr_word = strtok(dup_sentence, sep);
    while (ptr_word != NULL) {
        ptr_cur_count = ht_get(words_to_counts, ptr_word);

        // set count as 1 if word not exists
        if (ptr_cur_count == NULL) {
            int* int_mem = malloc(sizeof(int));
            *int_mem = 1;
            ht_set(words_to_counts, ptr_word, int_mem);
        }

        // increment count if word exists
        else {
            *ptr_cur_count = *ptr_cur_count + 1;
            ht_set(words_to_counts, ptr_word, ptr_cur_count);
        }

        ptr_word = strtok(NULL, sep);
    }

    // find max occurring word by iterating the hash table
    char max_word[MAX_WORD_LEN];
    int max_val = INT32_MIN;
    int cur_val;
    hti words_to_counts_iterator = ht_iterator(words_to_counts);

    while (ht_next(&words_to_counts_iterator)) {
        printf("key: %s, occurrence: %d\n", words_to_counts_iterator.key, *(int*) words_to_counts_iterator.value);
        cur_val = *((int*) words_to_counts_iterator.value);
        if (cur_val > max_val) {
            max_val = cur_val;
            strcpy(max_word, words_to_counts_iterator.key);
        }
        free(words_to_counts_iterator.value);
    }

    ht_destroy(words_to_counts);
    free(dup_sentence);

    char* result = strdup(max_word);
    return result;
}

int main() {
    const char* sentence = "aa aa aa bb bb bb cc cc cc cc dd dd dd dd dd";
    char* word = find_most_occurring_word(sentence);

    printf("\nword: %s", word);
    free(word);
}

// The hash table implementation is taken from here: https://github.com/benhoyt/ht
