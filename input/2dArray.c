#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(void) {
	int nrows = 0;
	int ncols = 0;
	scanf("%d %d\n", &nrows, &ncols);

	char **mat = (char **) malloc(nrows*sizeof(char *));

	for (int i=0; i<nrows; i++) {
		mat[i] = (char *) malloc((ncols)*sizeof(char));	
		for (int j=0; j<ncols; j++) {
		//	getc(mat[i][j]);				
			*fgets(char *mat[i], nrows, stdin);
//		mat[nrows][ncols] = "\0";
//		}
	}
	for (int i = 0; i < nrows; i++){
	printf("mat[%d] = %s\n", i, mat[i]);
	}

	free(mat);

	return 0;
}
}
