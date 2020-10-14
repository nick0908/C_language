#include <stdio.h>

int main(void)
{
	int a,i=1,sum=0;
	scanf("%d",&a);
	
	while(1)
	{
		sum=sum+i;
		
		if(a <= sum)
		{
			printf("%d",i);
			break;
		}
		
		i++;
	}
	
	return 0;
}
