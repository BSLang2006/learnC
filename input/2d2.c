#include <stdlib.h>
#include <stdio.h>

int main(void){
	
	int nrows = 0;
	int ncols = 0;
	int n;
	int d = 0;
	
	scanf("%d %d\n", &nrows, &ncols);

	int **mat = (int **) malloc(nrows*sizeof(int *));
	for (int i=0;i < nrows; i++) {
		*(mat+i) = (int *)malloc(ncols*sizeof(int));
	}

	for (int i = 0; i < nrows; i++) {
		d = 0;
		for (int j = 0; j < ncols*2; j++){
			n = getc(stdin);
			if (n != ' ' ) {
				mat[i][d] = n;
				d++;
			}
		}
	}
	for (int i = 0; i < nrows; i++) {
		for (int j= 0; j < ncols; j++) {
			printf("%c", mat[i][j]);
	}
	}
	return 0;
}

