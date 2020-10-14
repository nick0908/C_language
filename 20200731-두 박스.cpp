#include <stdio.h>

int main(void)
{
	int x1,y1,x2,y2,x3,y3,x4,y4;
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	scanf("%d %d %d %d",&x3,&y3,&x4,&y4);
	if((x2 == x3 && y2 == y3)||(x1 == x4 && y1 == y4))
	{
		printf("POINT");
	}
	else if((x2 == x3 && y2 != y3)||(x1 == x4 && y1 != y4))
	{
		printf("LINE");
	}
	else if((x2>=x3 && y2>=y3)||(x1<=x4 && x1<=x4))
	{
		printf("FACE");
	}
	else if((x2 != x3 && y2 != y3)||(x1 != x4 && y1 != y4))
	{
		printf("NULL");
	}
	return 0;
}
