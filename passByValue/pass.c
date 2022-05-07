#include <stdlib.h>
#include <stdio.h>

void passByValue(int i) {
	i = 95;
	return;
}

void passByAddress(int *i) {
	*i = 64;
	return;
}

