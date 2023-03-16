#include <stdio.h>

enum days {sun, mon, tues, wed, thurs, fri, sat};

typedef enum days days;

char* get_day(days day) {
//	printf("get_day started >> DEBUG\n");	//	DEBUG
	switch(day) {
		case sun: return "Sunday"; break;
		case mon: return "Monday"; break;
		case tues: return "Tuesday"; break;
		case wed: return "Wednesday"; break;
		case thurs: return "Thursday"; break;
		case fri: return "Friday"; break;
		case sat: return "Saturday"; break;
		default: return " ";
	}
}

days next_day(days today) {
	return (days) ((today + 1) % 7);
}

void print_day(char* str, days day) {
	char* value = get_day(day);
	
	if(strcmp(value, " ") == 0) {
		printf("Error %d is invalid\n", day);
	}
	else {
		printf("%s %s\n", str, value);
	}
//	printf("%s %s\n", str, value);
}

int main(void) {
	days today = thurs;

	print_day("Today is", today);

	print_day("Random day", 10);

	print_day("Next day is ", next_day(today));

	return 0;
}
