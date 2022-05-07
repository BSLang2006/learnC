#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[10];
	for (int i=0; i<10; i++) {
	       arr[i] = i;
	       printf("element %d = %d\n", i,i);
	}

	printf("\narr = %p\n", arr);
	printf("&arr[0] = %p\n", &arr[0]);
	printf("&arr[1] = %p\n", &arr[1]);
	printf("&arr[2] = %p\n\n", &arr[2]);

	printf("Element 1 = %d\n", arr[1]);
     	arr[1] = 80;
	printf("Element 1 = %d\n", arr[1]);
	*(arr+1) = 90;
	printf("Element 1 = %d\n\n", arr[1]);

	int *p1 = (int *) malloc(sizeof(int)*7);
	int *p2 = (int *) malloc(sizeof(int)*7);

	/*work on index notation and mathematical notation */
	for (int i=0; i<7; i++) {
		*(p1+i) = i;
	p2[i] = i;
		printf("p1+%d = %p\n", i, p1+i);
        }
	printf("*(p1+5) = %d\n", *(p1+5));
	printf("p1[5] = %d\n", p1[5]);
	printf("p2[6] = %d\n", p2[6]);
	



			return 0;
			}

