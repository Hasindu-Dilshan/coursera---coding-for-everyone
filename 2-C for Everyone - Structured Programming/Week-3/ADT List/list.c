#include <stdio.h>
#include <stdlib.h>


typedef struct list {
	int data;
	struct list * next;
} list;

list* create_item (int data) {
	list* head = malloc(sizeof(list));
	head -> data = data;
	head -> next = NULL;
	return head;
}

list* add_to_front(int data, list* pre_head) {
	list* head = create_item(data);
	head -> next = pre_head;
	
	return head;
}

list* array_to_list(int num_array[], int size) {
	int i;
	
	list* head = create_item(num_array[0]);
	
	for(i = 1; i < size; i++) {
		head = add_to_front(num_array[i], head);
	}
	
	return head;
}

void show_list(list* head) {
	while(head != NULL) {
		printf("%d ", head -> data);
		head = head -> next;
	}
}

int main (void){
	int num_array[] = {1, 2, 3, 4, 5, 6};
	int size = sizeof(num_array) / sizeof(int);
	
	list* num_list = array_to_list(num_array, size);
	
	show_list(num_list);
	
	puts("");
	
	return 0;
}
