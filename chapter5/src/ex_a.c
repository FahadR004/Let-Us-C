#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, overtime_hrs;
	int overtime_pay = 12;

	for (i = 1; i <= 10; i++) {
		printf("Enter employee %d's overtime hours: ", i);
		scanf("%d", &overtime_hrs);

		printf("Extra overtime pay is: ", overtime_hrs*0.75*12);

	}
}