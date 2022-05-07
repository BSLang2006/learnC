#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int nrows = 0;
	int ncols = 0;

	printf("enter the number of rows and columns\n");
	scanf("%d %d", &nrows, &ncols);
	printf("nrows = %d, ncols = %d\n", nrows, ncols);
	int *A = (int *) malloc(nrows*ncols*sizeof(int));	
	int **mat = (int **) malloc(nrows*sizeof(int *));
	for (int i=0; i<nrows; i++) {
		mat[i] = A + i*ncols;
	}
	for (int i = 0; i < nrows; i++){
		printf("For row %d enter %d elements ", i, ncols);
		for (int j = 0; j < ncols; j++) {
			scanf("%d",mat[i][j]);
		}
	}
	printf("\n");
	for (int i = 0;i < nrows; i++) {
		printf("array %d = ", i);
		for (int j = 0; j < ncols; j++) {
			printf("%d ", (mat[i][j]));
		}
		printf("\n");
	}

free(mat);
return 0;


}
