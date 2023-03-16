#include <stdlib.h>
#include <stdio.h>

typedef char DATA;

struct node {
	DATA d;
	struct node* left;
	struct node* right;
};

typedef struct node NODE;
typedef NODE* BTREE;

void inorder(BTREE root) {
	if(root != NULL) {
		inorder(root -> left);
		printf("%c ", root -> d);
		inorder(root -> right);
	}
}

BTREE new_node(void) {
	BTREE node = malloc(sizeof(NODE));
	
	return node;
}

BTREE init_node(DATA d1, BTREE p1, BTREE p2) {
	BTREE t = new_node();
	
	t -> d = d1;
	t -> left = p1;
	t -> right = p2;
	
	return t;
}

BTREE create_tree(DATA a[], int i, int size) {
	if(i >= size)
		return NULL;
	else {
		BTREE tree = init_node(a[i], create_tree(a, 2 * i + 1, size), create_tree(a, 2 * i + 2, size));
		return tree;
	}
}

int main() {
	char d[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	int size = sizeof(d) / sizeof(char);
	
	BTREE b = create_tree(d, 0, size);
	
	inorder(b);
}













