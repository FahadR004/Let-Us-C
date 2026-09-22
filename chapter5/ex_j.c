#include <stdio.h>
#include <stdlib.h>

int main() {
	int small_num, big_num, temp;

	printf("Enter the smallest and biggest number of a range to see all values in between: ");
	scanf("%d %d", &small_num, &big_num);

	temp = small_num;
	printf("Range of %d-%d is: ", small_num, big_num);
	while (temp <= big_num) {
		printf("%d ", temp);
		temp++;
	}
	printf("\n");
}