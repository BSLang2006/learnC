#include <stdio.h>
#include <stdlib.h>

typedef struct Board {
	double x;
	double y;
} Board;

int main(void) {
//	int p = 0;
	// stack
/*	Coord c;
	c.x = 5;
	c.y = 10;	

	printf("c.x = %f, c.y = %f\n", c.x, c.y);
*/
	// heap
	Board *c2;
	c2 = (Board *) malloc(sizeof(Board));
	printf("c2 = %f\n", (*c2).x);
	c2->x=2;
	printf("c2 = %f\n", (*c2).x);
	(*c2).x=4;
	printf("c2 = %f\n", (*c2).x);
	c2->x=6;
	c2->y=22;
	printf("(*c2).x = %f, c2->y = %f\n", (*c2).x, (*c2).y);

	free(c2);

	return 0;
}
