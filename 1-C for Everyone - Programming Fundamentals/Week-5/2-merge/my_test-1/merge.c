#include <stdio.h>

void merge(int a[], int b[],int c[], int m, int n);
void display_array(char *str, int array[], int size);

int main(void) {
	int a[] = {0,2,4,6,8};
	int b[] = {1,3,5,7,9};

	int size_a = sizeof(a) / sizeof(int);
	int size_b = sizeof(b) / sizeof(int);

	int c[size_a + size_b];
	
	display_array("array a: ", a, size_a);
	display_array("array b: ", b, size_b);

	merge(a, b, c, size_a, size_b);
	
	display_array("array c: ", c, size_a + size_b);

	return 0;
}

void display_array(char *str, int array[], int size)
{
	int i;

	printf("\n%s\n\t", str);

	for(i = 0; i < size; i++) {
		printf("%d ", array[i]);
	}

	puts("");
}

void merge(int a[], int b[],int c[], int m, int n)
{
	int i = 0, j = 0, k = 0;

	while(i < m && j < n){
		c[k++] = (a[i] < b[j]) ? a[i++] : b[j++];
	}

	while(i < m){
		c[k++] = a[i++];
	}
	while(j < n){
		c[k++] = b[j++];
	}
}
