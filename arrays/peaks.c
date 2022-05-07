#include <stdio.h>
#include <stdlib.h>

int main() {

	int peaks = 0;
	int nrows = 3;
	int ncols = 4;
	int mat[3][4] = {{1,5,3,2},{2,8,4,1},{0,6,1,3}};	
//	printf("enter rows and columns\n");
//	scanf("%d", &nrows);
//	scanf("%d", &ncols);	
//      printf("nrows = %d, ncols = %d\n", nrows, ncols);
	
//	int *A = (int *) malloc(nrows*ncols*sizeof(int));
//	int *mat = (int*) malloc(nrows*ncols*sizeof(int));

	for (int i=0;i < nrows;i++) { 
// 		printf("Enter the contents of array number %d:\n",i);
		printf("\nrow %d = ", i);
		for (int j=0;j < ncols; j++) {
//			scanf("%d", mat[i*ncols+j]);
//			printf("%d", mat[i*ncols+j]);
			printf("%d ", mat[i][j]);
		        	
			
		if (mat[i][j] > mat[i+1][j+1]) {
			peaks++;
		
		}
		}	
			}
	printf("\npeaks = %d\n", peaks);
//	free(mat);
	return 0;
}
