int validate_credit_card(char *s) {
	// printf("REACHED HERE\n");
	int sum1 = 0, sum2 = 0, i = 0, digit1, digit2;
	s = s + 15; // Starting at rightmost digit
	// printf("DEBUG: %s\n", s);
	while (i < 8) {
	    digit2 = (*(s)) - '0';
	    sum2 += digit2;
		digit1 = (*(s-1)) - '0';
		// printf("SUM: %d, DIGIT1: %d, DIGIT2: %d\n", sum2, digit1, digit2);
		digit1 *= 2;
		if (digit1 >= 10) {
			digit1 -= 9;
		}
		// printf("DIGIT1 : %d\n", digit1);
		sum1 += digit1;
		s-=2;
		i++;
	}
	// printf("DEBUG: S1= %d, S2= %d\n", sum1, sum2);

	if ((sum1 + sum2) % 10 == 0) 
		return 1;
	else 
		return 0;
}