#include <stdio.h>
#include "sum.h"

int main(void) {
	int a = 5;
	int b = 6;

	printf("a = %d, b = %d, sum(a,b) = %d\n", a,b,sum(a,b));

	return 0;
}
