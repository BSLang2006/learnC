#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n;
	char c[5];
	int d = 0;

	printf("Enter five space seperated characters: ");
	for (int i=0;i<9;i++) {
		n = getc(stdin);
		if (n != ' ') {
		c[d] = n;
		d++;
		}
	}

	for (int i=0;i<5;i++){
	 	printf("%c", c[i]);
	}
	/*
	printf("Enter the same character: ");
	fgets(*c, d, stdin);
	printf("%c", c);	
*/
	return 0;
}
