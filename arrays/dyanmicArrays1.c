#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int nrows = 0;
	int ncols = 0;

	printf("enter the number of rows and columns\n");
	scanf("%d %d", &nrows, &ncols);
	int *mat = (int *) malloc(nrows*ncols*sizeof(int));
	
	for (int i = 0; i < nrows; i++){
		printf("For row %d enter %d elements ", i, ncols);
		for (int j = 0; j < ncols; j++) {
			scanf("%d",mat+j*ncols+i);
		}
	}
	printf("\n");
	for (int i = 0;i < nrows; i++) {
		printf("array %d = ", i);
		for (int j = 0; j < ncols; j++) {
			printf("%d ", *(mat+j*ncols+i));
		}
		printf("\n");
	}

free(mat);
return 0;


}
