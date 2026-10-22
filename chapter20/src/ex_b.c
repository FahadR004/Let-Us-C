#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	if (argc != 4) {
		printf("ERROR: Missing arguments. Expected args-> operator, n, m\n");
		return 1;
	}	
	char operator, op_str[2];
	int operand1 = atoi(argv[2]);
	int operand2 = atoi(argv[3]);

	if (strlen(argv[1]) == 1) {
		operator = argv[1][0];
			switch (operator) {
			case '+':
				printf("RESULT: %d\n", operand1 + operand2);
				break;
			case '-':
				printf("RESULT: %d\n", operand1 - operand2);
				break;
			case 'x':
				printf("RESULT: %d\n", operand1*operand2);
				break;
			case '/':
				printf("RESULT: %d\n", operand1/operand2);
				break;
			case '%':
				printf("RESULT: %d\n", operand1%operand2);
				break;
			case '<':
				printf("RESULT: %s\n", operand1<operand2 ? "True" : "False");
				break;
			case '>':
				printf("RESULT: %s\n", operand1>operand2 ? "True" : "False");
				break;
			default:
				printf("ERROR: Invalid Input\n");
		}
	} else {
		strcpy(op_str, argv[1]);
		// printf("DEBUG: %d %d %d\n", operand1 != operand2, operand1, operand2);
		// printf("RESULT: %s\n", (operand1 != operand2) ? "True" : "False");
		// printf("OPERATOR: %s %s\n", op_str, argv[1]);
		if (strcmp(op_str, ">=") == 0) {
			printf("RESULT: %s\n", operand1 >= operand2 ? "True" : "False");
		} else if (strcmp(op_str, "<=") == 0) {
			printf("RESULT: %s\n", operand1 >= operand2 ? "True" : "False");			
		} else if ( strcmp(op_str, "!=") == 0) {
			printf("RESULT: %s\n", (operand1 != operand2) ? "True" : "False");
		} else if ( strcmp(op_str, "==") == 0) {
			printf("RESULT: %s\n", (operand1 == operand2) ? "True" : "False");
		} else {
			printf("Invalid Operator\n");
		}
	}
	



	return 0;
}