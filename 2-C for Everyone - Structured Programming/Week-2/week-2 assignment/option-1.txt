#include <stdio.h>

typedef enum month{ jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec} month;

typedef struct date{
	month m;
	int d;
} date;

date nextday(date day) {
	date next;
	
	if(day.m == feb && day.d == 28) {
		next.m = (day.m + 1) % 12;
		next.d = 1;
	}
	else if( (day.m <= jul && day.m % 2 == 0 && day.d == 31) || (day.m > jul && day.m % 2 == 1 && day.d == 31) ) {
		next.m = (day.m + 1) % 12;
		next.d = 1;
	}
	else if( (day.m <= jul && day.m % 2 == 1 && day.d == 30) || (day.m > jul && day.m % 2 == 0 && day.d == 30) ) {
		next.m =  (day.m + 1) % 12;
		next.d = 1;
	}
	else {
		next.m = day.m;
		next.d = day.d + 1;
	}
	
	return next;
}

void printdate(date day) {
	switch(day.m) {
		case jan: printf("January %d\n", day.d); break;
		case feb: printf("February %d\n", day.d); break;
		case mar: printf("March %d\n", day.d); break;
		case apr: printf("April %d\n", day.d); break;
		case may: printf("May %d\n", day.d); break;
		case jun: printf("June %d\n", day.d); break;
		case jul: printf("July %d\n", day.d); break;
		case aug: printf("August %d\n", day.d); break;
		case sep: printf("September %d\n", day.d); break;
		case oct: printf("October %d\n", day.d); break;
		case nov: printf("November %d\n", day.d); break;
		case dec: printf("December %d\n", day.d); break;
	}
}

int main (void) { 

	date day;
	
	// February 28
	day.m = feb;
	day.d = 28;
	
	printf("Day : ");
	printdate(day);
	
	printf("Next: ");
	printdate(nextday(day));
	
	printf("\n");
	
	// March 14
	day.m = mar;
	day.d = 14;
	
	printf("Day : ");
	printdate(day);
	
	printf("Next: ");
	printdate(nextday(day));
	
	printf("\n");
	
	// October 31
	day.m = oct;
	day.d = 31;
	
	printf("Day : ");
	printdate(day);
	
	printf("Next: ");
	printdate(nextday(day));
	
	printf("\n");
	
	// December 31
	day.m = dec;
	day.d = 31;
	
	printf("Day : ");
	printdate(day);
	
	printf("Next: ");
	printdate(nextday(day));
	
	printf("\n");

	return 0;
}
