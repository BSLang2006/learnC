#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(void) {
/*
	int size = 10;
	int *arr = (int *) malloc(sizeof(int)*size);
	memset(arr, 1, sizeof(int)*size);
	printf("arr[0] = %d, arr[5] = %d\n", arr[0], arr[5]);
*/
	char *s = (char *) malloc(sizeof(char)*2);
	char *s2 = (char *) malloc(sizeof(char)*27);
//	s[0] = "j";
//	s[2] = "k";

	for(int i=0; i<26; i++) {
		*(s2+i) = 65 + i;
	}
	s2[26] = '\0';

	printf("%s\n", s2);
	memcpy(s, s2, 2);
	printf("%c%c\n", s[0], s[2]);

	return 0;
}
