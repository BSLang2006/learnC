#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void) {
//	char *s = (char *) malloc(sizeof(char));
	size_t maxn = 0;
	int nrows = 2;
	int ncols = 4;
	char **mat = (char **) malloc(nrows*sizeof(char *));
	for (int i=0; i<nrows; i++) {
		mat[i] = (char *) malloc(ncols*sizeof(char));
		printf("row %d ", i);
		getline(&mat[i], &maxn, stdin);
	}
/*		
	printf("Enter a string for manipulation");
	getline(&s, &maxn, stdin);
	printf("String for manipulation is: %s", s);

	for (int i = 0; i < nrows; i++) {
		printf("enter columns %d: ", i);
		getline(&s, &maxn, stdin); 
}
*/
//	printf("%s", s);
//	printf("maxn = %ld\n", maxn);
//	printf("*(s+3) = %c & s[3] = %c\n", *(s+3), s[3]);
//	printf("*(s+4) = %c & s[4] = %c\n", *(s+4), s[4]);
	printf("mat[0][2] = %c\n", mat[0][2]);
	printf("mat[1][3] = %c\n", mat[1][3]);
	printf("mat[0] = %s", mat[0]);
	printf("mat[1] = %s", mat[1]);
	free(mat);
	return 0;
}
