#include <stdio.h>
#include <stdlib.h>

int main() {
int x = 9;
int *ptr;

ptr = &x;

*ptr = 8;

printf("The value of x is: %d\n", x);

	return 0;
}
