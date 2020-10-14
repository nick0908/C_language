#include <stdio.h>

int main(void)
{
	char munja[5] = {'A', 'B', 'C', 'D', 'E'};
	int nick[4] = {};
	
	for(int i=0;i<=4;i++)
	{
		printf("%c \n", munja[i]);
	}
	
	for(int i=0;i<=3;i++)
	{
		scanf("%d", &nick[i]);
	}
	for(int i=0;i<=3;i++)
	{
		printf("%d \n", nick[i]);
	}
	return 0;
}
