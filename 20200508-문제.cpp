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
	printf("�� ������ %d�� �Դϴ�.",count);
	
	return 0;
}
