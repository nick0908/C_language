#include <stdio.h>

int main(void)
{
	int a,b,c,d;
	scanf("%d %d %d",&a,&b,&c);
	scanf("%d",&d);
	c = c + d%60;
	if(c >= 60)
	{
		c=c%60;
		b=b+c/60;
	}
	b=b+d/60;
	if(b >= 60)
	{
		b=b%60;
		a=a+b/60;
	}
	a=a+d/60/60;
	if(a >= 24)
	{
		a = 0 + (a - 24);
	}
	printf("%d %d %d",a,b,c);
}
