#ifndef PASS_H

#define PASS_H

void passByValue(int i);
void passByAddress(int *i);

typedef struct Person {
	int age;
	char *name = (char *) malloc(sizeof(char)*10);
}Person_t;


#endif
