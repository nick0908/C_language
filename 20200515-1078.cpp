#include <stdio.h>

int main(void)
{
	int i,a,sum=0;
	scanf("%d",&a);
	for(i=0;i<=a;i++)
	{
		if(i%2 == 0)
		{
			sum=sum+i;
		}
	}
	printf("%d",sum);
	return 0;
}
