#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
	Linked list item structure
*/
typedef struct list {
	int data;
	struct list* next;
} list;

/*
	This function creates a list item	
*/
list* create_item (int data) {
	list* head = malloc(sizeof(list));
	head->data = data;
	head->next = NULL;
	
	return head;
}

/*
	This function adds a single list item to the linked list's front-end	
*/
list* add_to_front(int data, list* pre_head) {
	list* head = create_item(data);
	head->next = pre_head;
	
	return head;
}

/*
	This function inserts multiple new random ints to the list
*/
list* insert_values(list* head, int size) {
	int data;
	
	for(int count = 1; count < size; count++) {
		data = (int) rand();
		head = add_to_front(data, head);
	}
	
	return head;
}

/*
	This function has the Bubble Sort algorithm implementation
*/
void bubble_sort(list* head, int size) {
	for(int i = 0; i < size; i++) {
		for(list* current_head = head; current_head->next != NULL; current_head = current_head->next) {
			if(current_head->data > current_head->next->data) {
				int temp = current_head->data;
				current_head->data = current_head->next->data;
				current_head->next->data = temp;
			}
		}
	}
}

/*
	This function displays the current state of linked list
*/
void show_list(list* head){
	int counter = 1;
	
	while(head != NULL) {
		printf("%7d", head->data);
		
		if(counter % 5 == 0) {
			puts("");
		}
		
		counter++;
		head = head->next;
	}
}

int main(void) {
	srand(time(NULL)); // seed the random number generator
	int size = 100;
	
	int data = (int) rand();
	list* last_item = create_item(data);
	
	list* head = insert_values(last_item, size); // insert 100 values into the list
	
	/*	Note:

		head is in the 100th element
	*/
	
	bubble_sort(head, size); // Bubble sort the list
	
	show_list(head); // show list
	
	return 0;
}
