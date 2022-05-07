#include <stdlib.h>
#include <stdio.h>

int main(void) {

	char c = '*';

	int a = 5;
	int b = 3;
	int res;

	switch(c) {
		case '+':
			res = a+b;
			break;

		case '-':
			res = a-b;
			break;

		case '*':
			res = a*b;
			break;
	}
	printf("%d\N", res);
	return 0;
}
