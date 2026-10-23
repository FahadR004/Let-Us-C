#include <stdio.h>
#include <stdlib.h>

#define _BV(x) (1 << x)

struct time_struct {
	int seconds;
	int minutes;
	int hours;
};

int get_time(unsigned short time, struct time_struct *t);
void showbits(unsigned short n);

int main() {
	int status;
	struct time_struct t;
	struct time_struct *ptr = &t;
	unsigned short time = 0;
	time |= _BV(1);
	time |= _BV(2);
	time |= _BV(4);
	time |= _BV(6);
	time |= _BV(8);
	time |= _BV(10);
	time |= _BV(11);
	time |= _BV(14);
	time |= _BV(15);
	printf("TIME BITS: ");
	showbits( time);
	printf("\n");
	status = get_time(time, ptr);
	if (status == 1) {
		printf("ERROR: Seconds %d cannot be greater than 59!\n", t.seconds);
	} else if (status == 2) {
		printf("ERROR: Minutes %d cannot be greater than 59!\n", t.minutes);
	} else if (status == 3)  {
		printf("ERROR: Hours %d cannot be greater than 23!\n", t.hours);
	} else {
		printf("Time = %d:%d:%d\n", t.hours, t.minutes, t.seconds);
	}

	return 0;
}

int get_time(unsigned short time, struct time_struct *t) {
	unsigned short seconds, minutes, hours;
	unsigned short sec_mask = 31;
	unsigned short min_mask = (63 << 5);
	unsigned short hr_mask = (31 << 10);
	
	printf("SEC_MASK BITS: ");
	showbits( sec_mask);
	printf("\nMIN_MASK BITS: ");
	showbits( min_mask);
	printf("\nHOUR_MASK BITS: ");
	showbits( hr_mask);
	printf("\n");

	seconds = (time & sec_mask);
	minutes = (time & min_mask);
	hours = (time & hr_mask);
	

	while ((minutes & 1) == 0) {
		minutes = minutes >> 1;
	}

	while ((hours & (_BV(0))) == 0) {
		hours = hours >> 1;
	}

	printf("SECONDS BITS: ");
	showbits( seconds);
	printf("\nMINUTES BITS: ");
	showbits( minutes);
	printf("\nHOURS BITS: ");
	showbits( hours);
	printf("\n");

	if (seconds > 59) {
		return 1;
	} else if (minutes > 59) {
		return 2;
	} else if (hours > 23) {
		return 3;
	} else {
		t->seconds = seconds;
		t->minutes = minutes;
		t->hours = hours;
		return 0;
	}
}

void showbits (unsigned short  n ) 
{ 
	int  i, k, andmask ; 
	for ( i = 15 ; i >= 0 ; i-- ) 
	{ 
		andmask = 1 << i ;   
		k = n & andmask ; 
		k == 0 ? printf ( "0" ) : printf ( "1" ) ; 
	} 
}