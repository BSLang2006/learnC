#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
	int temp = *a;
	printf("SWAP\n");
	printf("*a = %d, and *b = %d\n", *a, *b);
//	printf("a = %d, and b= %d\n", a, b);	
	printf("&a before swap = %p\n", &a);
	printf("&b before swap = %p\n", &b);
	*a = *b;
	*b = temp;
	printf("swapping now\n");
	printf("*a = %d, and *b = %d\n", *a, *b);	
	printf("&a after swap = %p\n", &a);
	printf("&b after swap = %p\n\n", &b);
}

int main() {
	int a, b;
	a = 1000;
	b = 1;
	printf("MAIN\n");
	printf("a = %d, and b = %d\n", a, b);
	printf("&a = %p and &b = %p\n", &a, &b);
	printf("calling swap with &a, &b\n\n");
//	printf("*a = %d and *b = %d\n\n", *a, *b);
	swap(&a, &b);
	printf("MAIN\n");
	printf("a = %d, and b = %d\n", a, b);
	printf("&a = %p and &b = %p\n\n", &a, &b);
	return 0;
}
	
