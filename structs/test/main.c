#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
typedef struct Person{
	int age;
	char name[50];
//	int *mat;
} Person;

Person b;

//	string manipulation inside struct
	strcpy( b.name, "Brandon");
	printf("name is: %s\n", b.name);
	printf("enter a new name: \n");
	scanf("%s", b.name );
	printf("new name is: %s\n", b.name);

//	int manipulation inside struct
	Person *getAge;




return 0;
}
