#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char c;
	char nrows = 0;
	char ncols = 0;
	char nsteps = 0;

	FILE *fin = fopen("input.txt", "r");
	if (fin == NULL) {
		printf("File can't be opened");
		return 0;
	}
	do { c = fgetc(fin);	
		if (feof(fin)) {
			break;
	 	}
		if (c != ' '){
			fgetc(fin);
			printf("%c", c);
			nrows = c;
		}
	} while(1);


	fclose(fin);

	printf("nrows = %c, ncols = %c, nsteps = %c",nrows, ncols, nsteps);

	return 0;
}
