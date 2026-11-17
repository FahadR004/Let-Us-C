#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int sort_names(char **names, int size);
void display_strings(char **str, int arr_size);

int main() {
    char *names[] = { // Add names
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };
    int size = sizeof(names)/sizeof(names[0]);
    int status;

    printf("Before modification: \n");
    display_strings(names, size);
    
    status = sort_names(names, size);
    if (status != 0) {
        printf("ERROR: SORTING NAMES FAILED\n");
        return 1;
    }

    printf("After modification: \n");
    display_strings(names, size);
    return 0;
}

int sort_names(char **names, int size) {
    int i, j, k;
    int match = 0;
    char *temp;
    for (i = 0; i < size; i++) {
        for (j = 0; j < size - i - 1; j++) {
            k = j + 1;
            // printf("names[j]: %p, names[k]: %p, bool: %d\n", names[j], names[k], names[j] > names[k]);
            // if (names[j][0] > names[k][0]) { // Without zeroes, you're comparing memory address which would always be false hence, they increase in ascending order
            if (strcmp(names[j], names[k]) > 0) { 
                temp = names[k];
                names[k] = names[j];
                names[j] = temp;
            }
        }
    }
    return 0;
}

void display_strings(char **str, int arr_size) { // Arrays decay into single pointer when passed to a function, hence you cannot calculate it's size
    int i;
    for (i = 0; i < arr_size; i++) {
        printf("str[%d]: %s\n", i, str[i]);
    }
}