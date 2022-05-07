#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	int ncols = 5;
	int nrows = 2;
	char **mat = (char **) malloc(nrows*sizeof(char *));
	for (int i=0;i<nrows; i++) { 
		mat[i] = (char *) malloc(ncols*sizeof(char));
		for (int j; j<ncols; j++) {
			mat [i][j] = getc(stdin);
//			while ((mat[i][j] = getchar()) != '\n' && mat[i][j]!= EOF) {
//				printf("%d", mat[i][j]);
//			}
				
//			fgetc(*mat[i]);
		}
//		if (mat[i] != NULL) {
//                rmSpaces(mat[i]);
//		}
//		*mat[i][ncols] = "\0";
//		if (mat[i] != NULL) {
//			rmSpaces(mat[i]);			
//		}
	}
	printf("mat[0] = %s", mat[0]);
	printf("mat[1] = %s", mat[1]);
	for (int i=0; i<nrows; i++) {
		printf("row %d ", i);
		for (int j=0; j<ncols;j++) {
			printf("%c", mat[i][j]);
		}
		printf("\n");
	}
	free(mat);
	return 0;
}
