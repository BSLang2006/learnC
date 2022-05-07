#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int arr[5] = {1,2,3,4,5};
	printf("arr = %p, &arr[0] = %p\n", arr, &arr[0]);
	printf("arr[1] = %d, *(arr+1) = %d\n", arr[1], *(arr+1));
//mat + 2 pointer to start of row with index of 2
//*(mat + 2) pointer to an int
	int mat[3][4] = {{1,3,4,8},{10,9,7,2},{5,6,11,12}};
	printf("mat[0][1] = %d - should be 3\n", mat[0][1] );
	printf("mat[0][3] = %d - should be 8\n", mat[0][3] );
	printf("mat[2][3] = %d - should be 12\n", mat[2][3] );
	printf("mat = %p, mat[0] = %p\n", mat, mat[0]);
	printf("*(mat[2] + 3) = %d, *(*(mat[2]) +3) = %d\n", *(mat[2] +3), *(*(mat+2) + 3));
	printf("*(mat[2] + 2) = %d - 11?\n", *(mat[2] +2)); 
	return 0;
}

