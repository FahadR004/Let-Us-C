#include <stdio.h>
#include <stdlib.h>

int main( ) { 
	int cost_price, selling_price, res;
	
	printf("Enter cost price and selling price (with spaces): ");
	scanf("%d %d", &cost_price, &selling_price);

	if (cost_price < 0 || selling_price < 0) {
		printf("ERROR: Negative values entered");
		return 1;
	}

	res = selling_price - cost_price;
	if (res >  0) 
		printf("Seller has made profit: %d", res);
	else
		printf("Seller has suffered loss: %d", res);		

	return 0;
}	
