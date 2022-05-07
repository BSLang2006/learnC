#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int *p;

	printf("Before malloc: p = %p\n", p);

	p = (int *) malloc(sizeof(int));

	printf("After malloc: p = %p\n", p);
	printf("Value at p before setting = %d\n", *p);
	*p = 10;
	printf("Value at p after setting = %d\n", *p);
	
	int *p3 = (int *) malloc(sizeof(int)*10);
	printf("p3 after malloc = %p\n", p3);

	int *p2;
	p2 = (int *) calloc(100, sizeof(int));
	printf ("value at p2 before setting = %d\n", *p2);
	*p2 = 80;
	printf ("value at p2 after setting = %d\n", *p2);

	char *pc;
	pc = (char *) malloc(20*sizeof(char));

	return 0;
}
