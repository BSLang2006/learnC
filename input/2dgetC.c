#include <stdio.h>
#include <stdlib.h>

int main(void) { 

	int nrows = 2;
	int ncols = 5;
	int n;
	int d = 0;
	int input = nrows*(ncols*2);
	int *mat = (int *) malloc(input*sizeof(int));

	for (int i=0; i<input; i++) {
		n = getc(stdin);
		if (n != ' ') {
		 mat[d] = n;
		 d++;			
		}
	}

	for (int i=0; i < input; i++) {
		printf("%c",  mat[i]);
	}
	return 0;
}
