#include <stdio.h>
#include <stdlib.h>

#include <sum.h>

int main(void) {
	int a = 5;
	int b = 4;
	int c = sum(a, b);
	printf("result = %d\n", c);
	
	int *p = (int *) malloc(sizeof(int)*2);
	*p = 4;
	printf("p outside before = %p\n", p);



	return 0;
}
int sum(int a, int b) {
	int result = a + b;
	return result;
}



// function prototye goes in front of main when function is below main. 
// sum function prototype looks like 'double sum(double, double)'
// if function returns nothing has a void return type
