#include <stdio.h>
#include <stdlib.h>

void get_factors(int, int);

int main() {
	int num = 18, factor = 2;

	printf("Prime factors of num %d are: ", num);
	get_factors(num , factor);
	printf("\n");
	return 0;
}

// Recursive
void get_factors(int num, int factor) {
	if (num == 1) {
		return;
	} else {
		if (num % factor == 0) {
			num = num / factor;
			printf("%d ", factor);
			get_factors(num, factor);
		} else {
			factor++;
			get_factors(num, factor);
		}
	}
}

// // Recursive (optimized)
// void get_factors(int num, int factor) {
// 	if (num <= 1) {
// 		return;
// 	} 
// 	if (factor * factor > num) {
//         printf("%d ", num);
//         return;
//     }
// 	if (num % factor == 0) {
// 		printf("%d ", factor);
// 		get_factors(num / factor, factor);
// 	} else {
// 		get_factors(num, factor+1);
// 	}
// }

// Non-recursive
// void get_factors(int num, int factor) {
// 	while (num != 1) {
// 		if (num % factor == 0){
// 			num = num / factor;
// 			printf("%d ", factor);
// 		}
// 		else 
// 			factor++;
// 	}
// 	printf("\n");
// }

// Non-recursive (optimized)
// No factors below sqrt of number, number is prime
// void get_factors(int num) {
// 	int factor;
// 	for (factor = 2; factor*factor <= num; factor++) {
// 		while (num % factor == 0) {
// 			printf("%d ", factor);
// 			num = num / factor;
// 		}
// 	}
// 	if (num > 1) // Then, it must be prime
// 		printf("%d", num);
// 	printf("\n");
// }