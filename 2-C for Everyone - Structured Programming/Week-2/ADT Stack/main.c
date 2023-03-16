#include <stdio.h>

#define EMPTY -1
#define MAX_LEN 10

typedef struct stack {
	char string[MAX_LEN];
	int top;
} stack;

void reset (stack * stk) {
	stk->top = EMPTY;
}

void push (char c, stack * stk) {
	if(!isFull(stk)){
		stk->top++;
		stk->string[stk->top] = c;
	}
}

char pop (stack * stk) {
	if(!isEmpty(stk))
		return stk->string[stk->top--];
}

int isFull(stack *stk) {
	return (stk->top == MAX_LEN - 1);
}

int isEmpty(stack *stk) {
	return (stk->top == EMPTY);
}

int main (void) {
	stack stk;
	
	reset(&stk);
	
	char * string = "Hasindu Dilshan";
	
	int i = 0;
	
	// push values to the stack
	while(!isFull(&stk) && string[i] != '\0') {
		push(string[i], &stk);
		i++;
	}
	
	// pop values from the stack
	
	while(!isEmpty(&stk)) {
		printf("%c ", pop(&stk));
	}
	
	puts("");
	
	return 0;
}
