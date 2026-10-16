#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int min;
	int max;
} category;


int main() {
	int wind_speed;
	category h_one = {74, 95};
	category h_two = {96, 110};
	category h_three = {111, 130};
	category h_four = {131, 155};
	category h_five = {156, 1000}; 

	printf("Enter wind speed in miles/hr: ");
	scanf("%d", &wind_speed);

	if (wind_speed >= h_one.min && wind_speed <= h_one.max) 
		printf("We have Hurricane Category I\n");
	else if (wind_speed >= h_two.min && wind_speed <= h_two.max)
		printf("We have Hurricane Category II\n");
	else if (wind_speed >= h_three.min && wind_speed <= h_three.max)
		printf("We have Hurricane Category III\n");
	else if (wind_speed >= h_four.min && wind_speed <= h_four.max)
		printf("We have Hurricane Category IV\n");
	else if (wind_speed >= h_five.min)
		printf("We have Hurricane Category V\n");
	else 
		printf("Invalid Input! Please try again!\n");


	return 0;
}