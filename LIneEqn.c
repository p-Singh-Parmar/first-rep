#include<stdio.h>
#include<stdbool.h>
struct line
{
	int x1,x2,x3,y1,y2,y3,a1,a2,b1,b2,s1,s2;
	
};
int slope();
bool isStraight();
int main()
{
	struct line p;
	
	scanf("%d %d %d %d %d %d",&p.x1, &p.y1, &p.x2, &p.y2, &p.x3, &p.y3);
	printf("coordinates of points are (%d %d) and (%d %d) and (%d %d) \n", p.x1, p.y1, p.x2, p.y2, p.x3, p.y3);
	if(isStraight())
	{
		printf("%d %d\n",s1, s2);
		printf("points form a straight line\n");
	}
	else
	{
		printf("pints form a triangle\n");
	}
		
	return 0;
}

int slope(int a, int b, int a1, int b1)
{
	int S = (b1-b)/(a1-a);
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



















