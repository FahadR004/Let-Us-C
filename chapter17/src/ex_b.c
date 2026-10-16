#include <stdio.h>
#include <stdlib.h>

#define CUSTOMERS 3

// #define USER_INPUT

struct cust {
	int acc_num;
	char name[40];
	int balance;
};

void withdraw_money(struct cust customers[CUSTOMERS], int acc_num);
void deposit_money(struct cust customers[CUSTOMERS], int acc_num);
int check_amt(int amount);
void print_low_amt_customers(struct cust customers[CUSTOMERS]);

int main() {
	int i, user_input, acc_num;
	struct cust customers[CUSTOMERS];

	for ( i = 0 ; i < CUSTOMERS; i++ ) { 
	  printf("Enter acc_num, name, balance (separated by spaces): " ) ; 
	  scanf( "%d %s %d", &customers[i].acc_num, customers[i].name, &customers[i].balance) ; 
	}

	for ( i = 0 ; i < CUSTOMERS ; i++ ) { 
	  	printf("Account Number: %d, Name: %s, Balance: %d \n", customers[i].acc_num, customers[i].name, customers[i].balance) ; 
	}

#ifdef USER_INPUT
	printf("Hello customer, do you want to: \n");
	printf("0 - Withdraw Money \n");
	printf("1 - Deposit Money\n");
	printf("Enter your choice here with acc_num: ");
	scanf("%d %d", &user_input, &acc_num);

	if (user_input == 0) 
		withdraw_money(customers, acc_num);
	else if (user_input == 1) 
		deposit_money(customers, acc_num);
	else {
		printf("Invalid input!");
		return 1;
	}
#endif

	print_low_amt_customers(customers);

	return 0;
}

int check_amt(int amount) {
	if (amount <= 100)
		return 1;
	else
		return 0;
}

void print_low_amt_customers(struct cust customers[CUSTOMERS]) {
	int i, flag = 0;
	printf("Low balance customers data: \n");
	for ( i = 0 ; i < CUSTOMERS ; i++ ) { 
		if (check_amt(customers[i].balance)) {
	  		printf("Account Number: %d, Name: %s, Balance: %d \n", customers[i].acc_num, customers[i].name, customers[i].balance) ; 
			flag = 1;
		}
	}
	if (!flag) {
		printf("There are no customers with low balance!\n");
	}
}

void deposit_money(struct cust customers[CUSTOMERS], int acc_num) {
	int i;
	int money;
	printf("Enter money to deposit: ");
	scanf("%d", &money);
	for (i = 0; i < CUSTOMERS; i++) {
		if (customers[i].acc_num == acc_num) {
			customers[i].balance += money;
			printf("Your new balance is %d\n", customers[i].balance);
			break;
		}
	}
} 

void withdraw_money(struct cust customers[CUSTOMERS], int acc_num) {
	int i;
	int money;
	printf("Enter money to withdraw: ");
	scanf("%d", &money);
	for (i = 0; i < CUSTOMERS; i++) {
		if (customers[i].acc_num == acc_num) {
			if (!check_amt(customers[i].balance - money)) {
				customers[i].balance -= money;
				printf("Your new balance is %d", customers[i].balance);
			} else {
				printf("The balance is insufficient for the specfied withdrawal!\n");
				printf("Your current balance is %d\n", customers[i].balance);
			}
			break;
		}
	}
}
