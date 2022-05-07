#include <stdio.h>
#include <stdlib.h>

int main(void) {
	size_t maxn = 10;
	char *s = (char *) malloc(sizeof(char)*maxn);
	
		
	printf("Input lines: \n");
	getline(&s, &maxn, stdin);
	printf("%s\n", s);
	printf("Memory address is: %p\n", &s);
	printf("Size of the array is %ld\n\n", maxn);

	printf("Enter a new string:\n");
	getline(&s, &maxn, stdin);
	printf("Memory address is still: %p\n", &s);
	printf("Size of the array is %ld\n", maxn);
	printf("The new string is: %s\n", s);
	
	for (int i = 0; i<maxn; i++) {
		printf("%c", s[i]);
		}	
	free(s);
		
	return 0;
}
