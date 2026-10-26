#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIFE 0
#define HEALTH 1
#define AUTO 2
#define HOME 3

#define SIX_MONTHS 0
#define TWELVE_MONTHS 1
#define EIGHTEEN_MONTHS 2
#define TWENTY_FOUR_MONTHS 3

typedef struct {
	unsigned int gender : 1;
	unsigned int age: 1;
	unsigned int ins_name : 2;
	unsigned int duration: 2;		
} ins_policy_holder;

int main() {
	char gender[16], ins_name[16];
	int age, duration;
	ins_policy_holder person;
	
	printf("Insurance Policy Form\n");
	printf("Enter gender (Male or Female): ");
	scanf("%s", gender);

	if (strcasecmp(gender, "male") == 0) {
		person.gender = 0;
	} else {
		person.gender = 1;
	}

	printf("Enter age: ");
	scanf("%d", &age);
	if (age < 18) {
		person.age = 0;
	} else {
		person.age = 1;
	}

	printf("Enter name of insurance policy (life, health, auto, home) : ");
	scanf("%s", ins_name);
	if (strcasecmp(ins_name, "life") == 0) {
		person.ins_name = LIFE;
	} else if (strcasecmp(ins_name, "health") == 0) {
		person.ins_name = HEALTH;
	} else if (strcasecmp(ins_name, "auto") == 0) {
		person.ins_name = AUTO;
	} else if (strcasecmp(ins_name, "home") == 0) {
		person.ins_name = HOME;
	} else {
		printf("Invalid input! Storing default, life insurance...");
		person.ins_name = LIFE;
	}

	printf("Enter duration of the policy (6, 12, 18, 24 (months)): ");
	scanf("%d", &duration);
	if (duration == 6) {
		person.duration = SIX_MONTHS;
	} else if (duration == 12) {
		person.duration = TWELVE_MONTHS;
	} else if (duration == 18) {
		person.duration = EIGHTEEN_MONTHS;
	} else if (duration == 24) {
		person.duration = TWENTY_FOUR_MONTHS;
	} else {
		printf("Invalid input! Setting default of 12 months... \n");
		person.duration = TWELVE_MONTHS;
	}

	printf("Information stored for insurance policy holder is: \n");
	printf("Gender: %d\n", person.gender);
	printf("Age Group: %d\n", person.age);
	printf("Insurance Name: %d\n", person.ins_name);
	printf("Duration: %d\n", person.duration);

	return 0;
}