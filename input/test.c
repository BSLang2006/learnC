#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n;
	char c[5];
	int d = 0;
	int ncols = 5;
	int nrows = 2;

	

	char mat* = (char *) malloc(5*sizeof(char));
	printf("Enter five space seperated characters: ");
	for (int i=0;i<9;i++) {
		mat[i] = getc(stdin);
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
