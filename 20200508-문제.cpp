#include <stdio.h>

int main(void)
{
	int i,count = 0;
	
	for(i=0;i<=100;i++)
	{
		if(i%7 == 0)
		{
			printf("%d \n",i);
			count++;
		}
	}
	printf("총 개수는 %d개 입니다.",count);
	
	return 0;
}
