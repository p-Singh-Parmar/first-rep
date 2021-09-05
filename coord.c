#include<stdio.h>
#include<math.h>

struct coordinate
{
	int x1, x2, y1, y2;
};
void distance(struct coordinate);
int main()
{
	struct coordinate p;
	printf("enter coordinates for points\n");
	scanf("%d %d %d %d", &p.x1, &p.x2, &p.y1, &p.y2);
	printf("coordinates are %d,%d and %d,%d \n", p.x1, p.x2, p.y1, p.y2);
	distance(p);
	return 0;
}
void distance(struct coordinate p)
{
	int sum;
	sum = pow((p.x2-p.x1),2) + pow((p.y2-p.y1),2);
	printf("distance between two points is: %d", sum);
}
