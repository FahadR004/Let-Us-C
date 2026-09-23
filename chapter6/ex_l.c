#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    for (i = 0; i < 24; i++) {
        if (i == 0) 
            printf("00:00 AM MIDNIGHT\n");
        else if (i < 12) 
            printf("%s%d:00 AM\n", (i < 10) ? "0" : "", i);
        else if (i == 12)
            printf("12:00 PM NOON\n");
        else
            printf("%d:00 PM\n", i);
    }  
    return 0; 
}