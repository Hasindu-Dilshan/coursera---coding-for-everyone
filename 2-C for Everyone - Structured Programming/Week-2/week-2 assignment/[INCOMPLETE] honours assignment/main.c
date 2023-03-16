#include <stdio.h>

#define MAX_CARDS 7

typedef enum suits { h, d, s, c } suits; // hearts, diamonds, spades, clubs

typedef struct card {
	int pip;
	suits suit;
} card;

int main(void) {
	srand(time(NULL)); // Initialize random number generator
	
	card cards[MAX_CARDS];
	
	int counter;
	
	for(counter = 0; counter < MAX_CARDS; counter++) {
		cards[counter].pip = rand() % 13 + 1;
		cards[counter].suit = rand() % 4;
	}
	
	return 0;
}

