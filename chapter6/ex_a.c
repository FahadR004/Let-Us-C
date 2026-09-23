#include <stdio.h>
#include <stdlib.h>

int main () {
	int flag = 0;
	for (int i = 2; i <= 300; i++) {
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				flag = 1;
				break;
			}
		}	
		if (!flag) printf("%d is a prime number\n", i);
		flag = 0;
	}
	return 0;
}