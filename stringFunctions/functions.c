#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void) {
	char c = '\0';
	char s2[] = "Hellow darkness my old friend";
	s2[5] = '\0';
	char s3[] = "happy dog";
	
	printf("%s\n", s2);
	return 0;
}
