#include<stdio.h>
struct line
{
	int x1,x2,x3,y1,y2,y3,a1,a2,b1,b2;
	
};
float slope(struct line);
bool isStraight();
int main()
{
	struct line p;
	
	scanf("%d %d %d %d %d %d",&p.x1, &p.y2, &p.x2, &p.y2, &p.x3, &p.y3);
	printf("coordinates of points are (%d %d) and (%d %d) and (%d %d) \n", p.x1, p.x2, p.y1, p.y2, p.x3, p.y3);
	if(isStraight())
	{
		printf("points form a straight line\n");
	}
	else
		printf("pints form a triangle\n");
	return 0;
}

float slope(float a, float b, float a1, float b1)
{
	float S = (b1-b)/(a1-a);
	return S;
	
}

bool isStraight(struct line p)
{
	float s1, s2;
	s1= slope(p.x1, p.y1, p.x2, p.y2);
	s2= slope(p.x3, p.y3, p.x2, p.y2);
	if(s1==s2)
		return true;
	else
		return false;
}



















