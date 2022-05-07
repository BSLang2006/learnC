#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
/*	//scanf - still needs a format specifier
	int tot = 0;
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("you entered %d, %d, %d\n", a,b,c);
	tot = a+b+c;
	printf("tot = %d\n", tot);

	//scanf - loop
	int num;
	int tot2 = 100;
	int ret = EOF+1;

	printf("Enter a number to scan: \n");
	while (ret != EOF) {
		printf("total = %d\n", tot2);
		ret = scanf("%d", &num);
		tot2 += num;
	}

	// fgets - must allocate memory
	int n = 10;
	char *s = malloc(sizeof(char)*n);
	s = fgets(s, n, stdin);
	if (s != NULL) {
		printf("%s\n", s);
	}
*/
	// getline - POSIX - must free memory to prevent a leak.
	size_t maxn = 10;
//	int nread;
	printf("Empty array size is %ld\n", maxn);
	char *s = (char *) malloc(sizeof(char)*maxn);
	printf("enter a string?\n");
	getline(&s, &maxn, stdin);
	
	printf("string = %s\n", s);
	printf("string index 4 = %c\n", s[4]);
	printf("pointer of s = %p\n", s);
	printf("Memory address of the array is : %p\n", &s);
	printf("memory now has room to store: %ld chars\n", maxn);
	free(s);
	printf("memory now: %p\n", &s);
		
	return 0;
}
