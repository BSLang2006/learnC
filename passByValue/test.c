#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pass.h"

Person_t p1 = {60, "art"};

int main() {
	printf("Person_t p1 = %d, %s\n", p1.age, p1.name);
	int a = 20;
	passByValue(a);
	printf("a, passed by value = %d\n", a);	
	passByAddress(&a);
	printf("a, passed by address = %d\n", a);
	
	struct Person p2;
	struct Person* personPointer;
	personPointer = &p2;

	//(*personPointer).name = "steve";
	(*personPointer).age = 57;
	strcpy(p2.name, "steve");
	printf("p2 = %s,%d\n",p2.name, p2.age);
	
	p2.age = 64;
	char tempName[20];
	//why do i have trouble assigning a name this way?
	tempName = "dick";
	*(p2).name = tempName;
	printf("p2 = %s,%d\n", p2.name, p2.age);
	
return 0;
}
