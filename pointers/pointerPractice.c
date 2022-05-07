#include <stdio.h>

int main(void) {
	int a, b, c; /* creates one box for a and one for b */
	int *iptr; /* asterisk in declaration creates a pointer */
        int *jptr; /* these two lines creates boxes for the pointers */
	int *kptr;

	a = 5;  /* these populate the boxes */
	b = 10;

	printf("iptr before initializing = %p\n", iptr);
	printf("jptr before initializing = %p\n", jptr); 

	iptr = &a; /* The & mean "reference address of" */
	jptr = &b; //assign the address of b to jptr
	kptr = &c;
	c = a;

	printf("value pointed to by iptr = %d\n", *iptr); /*asterisk means "refernce value of" operator*/
	printf("value pointed to by jptr = %d\n", *jptr); 
	printf("Address of a = %p\n", iptr);
	printf("Address of b = %p\n", jptr);
	
	printf("Variable a = %d\n", a);
	printf("Variable b = %d\n", b);
	printf("Variable c = %d\n", c);

	*iptr = 100; /*this asterisk refers to the pointer */
	printf("*ipter changed to %d\n", *iptr);
	printf("Variable a = %d\n", a);
	printf("Variable c = %d\n", c);
	printf("Address of a is stil %p, but the value of a has changed to %d\n", iptr,a);
	a = 200;
	printf("Variable a changed to %d\n", a);
	printf("Variable c = %d\n", c);
	printf("Address of a is still %p\n", iptr);

	return 0;
}
