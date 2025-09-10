#include <stdio.h>

struct Point
{
	int x;
	int y;
};

int main()
{
	struct Point p1;
	struct Point *p2;

	p2 = &p1;

	(*p2).x = 10;
	(*p2).y = 20;
	

	printf("x = %d\n", p1.x);
	printf("y = %d\n", p1.y);

	return 0;


}
