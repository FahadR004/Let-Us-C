#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int replace_text_string(char **str, char *str1, char *str2, uint8_t size, uint8_t original[]);
void display_strings(char **str, int arr_size);

int main() {
    uint8_t status, size, i;
    char *str[] = {
        "We will teach you how to...",
        "Move a mountain",
        "Level a building",
        "Erase the past",
        "Make a million",
        "...all through C!"
    };
    char str1[100];
    char str2[100];
    size = sizeof(str)/sizeof(str[0]);
    uint8_t original[size];
    printf("Enter string1: ");
    // fgets(str1, 100, stdin); - Fails match due to \n added in string
    scanf("%s", str1);

    printf("Enter string2: ");
    scanf("%s", str2);

    printf("Before modification: \n");
    display_strings(str, size);
    
    status = replace_text_string(str, str1, str2, size, original);
    if (status != 0) {
        printf("ERROR: STRING REPLACEMENT FAILED\n");
        return 1;
    }

    printf("After modification: \n");
    display_strings(str, size);

    for (i = 0; i < size; i++) {
        if (original[i])
            free(str[i]);
    }

    return 0;
}

int replace_text_string(char **str, char *str1, char *str2, uint8_t arr_size, uint8_t original[]) {
    int i, index;
    char *buffer;
    char *res_found;
    for (i = 0; i < arr_size; i++) {
        res_found = strstr(str[i], str1);
        original[i] = 0;
        // printf("%s - res_found\n", res_found);
        if (res_found == NULL) {
            continue;
        }
        buffer =  malloc(128*sizeof(char)); // char *buffer would be incorrect or unnecessary. I just want to hold one string.
        if (buffer == NULL) {
            printf("%s - Memory Allocation Failed.\n", __func__);
            return 1;
        }
        strcpy(buffer, str[i]);
        // printf("%s, %s - this is buffer and str1\n", buffer, str1);
        index = res_found - str[i];
        // printf("%d - index\n", index);
        buffer[index] = '\0';
        // printf("1) %s - buffer\n", buffer);
        strcat(buffer, str2);
        // printf("2) %s - buffer\n", buffer);
        strcat(buffer, &(str[i][index + strlen(str1)])); // added sizeof() instead of strlen() *facepalm*
        // printf("3) %s - buffer\n", buffer);
        // printf("4) %c - character starting\n", str[i][index + sizeof(str1)]);
        str[i] = buffer;
        original[i] = 1;
        // printf("%s - str[%d]\n", str[i], i);
    }
    return 0;
}

void display_strings(char **str, int arr_size) { // Arrays decay into single pointer when passed to a function, hence you cannot calculate it's size
    int i;
    // printf("This is string and size: %s %d", str[0], size);
    // printf("This is size: %d \n", size);
    for (i = 0; i < arr_size; i++) {
        printf("str[%d]: %s\n", i, str[i]);
    }
}