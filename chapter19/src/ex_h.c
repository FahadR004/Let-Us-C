#include <stdio.h>
#include <stdlib.h>

#define CUSTOMERS "docs/CUSTOMERS.DAT"
#define TRANSACTIONS "docs/TRANSACTIONS.DAT"

struct  customer { 
	int  accno ; 
	char  name[ 30 ] ; 
	float  balance ; 
}; 

struct  trans { 
	int  accno ; 
	char  trans_type ; 
	float  amount ; 
};

int main() {
	FILE *f_cust, *f_trans;
	struct customer c;
	struct trans t;
	char buffer[64];
	int last_position = 0;
	int offset = 0;

	f_cust = fopen(CUSTOMERS, "r+");
	if (f_cust == NULL) {
		printf("ERROR: File not found\n");
		return 1;
	}

	f_trans = fopen(TRANSACTIONS, "r+");
	if (f_trans == NULL) {
		printf("ERROR: File not found\n");
		return 1;
	}

	while (fscanf(f_cust, "%2d %20s %7f", &c.accno, c.name, &c.balance) != EOF) {
		while (fscanf(f_trans, "%d %c %f", &t.accno, &t.trans_type, &t.amount) != EOF) {
			if (c.accno == t.accno) {
				printf("For AC#:%d, Original Balance = %.2f ", c.accno, c.balance);
				if (t.trans_type == 'D') {
					c.balance += t.amount;
				} else {
					if ((c.balance - t.amount > 100)) {
						c.balance -= t.amount;
					}
				}
				printf("New Balance = %.2f\n", c.balance);
			}
		}
		rewind(f_trans);
		// printf("DEBUG: ftell %ld\n", ftell(f_cust));
		int last_pt = ftell(f_cust);
		offset = last_position - ftell(f_cust);
		fseek(f_cust, offset, SEEK_CUR);
		// printf("CURRENT_POSITION: %ld, LAST_POSITION: %d, OFFSET: %d\n", ftell(f_cust), last_position, offset);
		fprintf(f_cust, "%d %s %d\n", c.accno, c.name, (int)c.balance);

		last_position = ftell(f_cust);
	}


	fclose(f_cust);
	fclose(f_trans);

	return 0;
}