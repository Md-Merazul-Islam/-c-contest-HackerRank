#include <stdio.h>
#include <stdlib.h>

int custom_strcmp(const char* a, const char* b) {
    while (*a && *b && *a == *b) {
        a++;
        b++;
    }
    return *a - *b;
}

int lexicographic_sort(const char* a, const char* b) {
    return custom_strcmp(a, b);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    return custom_strcmp(b, a);
}

int count_distinct_characters(const char* str) {
    int char_freq[128] = {0};
    int count = 0;
    while (*str) {
        char_freq[(int)*str]++;
        str++;
    }
    for (int i = 0; i < 128; i++) {
        if (char_freq[i] > 0) {
            count++;
        }
    }
    return count;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int x = count_distinct_characters(a);
    int y = count_distinct_characters(b);
    return x - y;
}

int custom_strlen(const char* str) {
    int len = 0;
    while (*str) {
        str++;
        len++;
    }
    return len;
}

int sort_by_length(const char* a, const char* b) {
    int len_a = custom_strlen(a);
    int len_b = custom_strlen(b);
    return len_a - len_b;
}

void swapStrings(char** str1, char** str2) {
    char* temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

void string_sort(char** arr, const int len, int (*cmp_func)(const char* a, const char* b)) {
    int i, j;
    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - i - 1; j++) {
            if (cmp_func(arr[j], arr[j + 1]) > 0) {
                swapStrings(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    char** arr = (char**)malloc(n * sizeof(char*));

    for (int i = 0; i < n; i++) {
        arr[i] = (char*)malloc(1024 * sizeof(char));
        scanf("%s", arr[i]);
    }

    string_sort(arr, n, lexicographic_sort);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    // Free the memory allocated for each string and the array of pointers
    for (int i = 0; i < n; i++)
        free(arr[i]);
    free(arr);

    return 0;
}
