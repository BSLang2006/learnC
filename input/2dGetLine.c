#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void) {
	int nrows = 0;
	int ncols = 0;
	int c;
	int index = 0;

	scanf("%d %d\n", &nrows, &ncols);

	char **mat = (char **) malloc(nrows*sizeof(char *));
	for (int i=0; i<nrows; i++) {
		for (int j=0; j < ncols*2-1; j++) {

		mat[i] = (char *) malloc((ncols*2-1)*sizeof(char));
		c = getc(stdin);
		if (c != ' ') {
			mat[i][index] = c;
			index++;
		}
		}
//		getc(&mat[i], &maxn, stdin);
	}
/*	printf("mat[0][2] = %c\n", mat[0][2]);
	printf("mat[1][3] = %c\n", mat[1][3]);
	printf("mat[0] = %s", mat[0]);
	printf("mat[1] = %s", mat[1]);
*/
	for (int i=0; i<nrows; i++) {
		for(int j=0; j<ncols;j++) {
			printf("%c", mat[i][j]);
		}
	}
	free(mat);

	return 0;
}
