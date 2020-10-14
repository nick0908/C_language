#include <stdio.h>

int main(void)
{
	int x = 1;
	
	while(x != 0)
	{
		scanf ("%d",&x);
		if (x == 0)
		{
			break;
		}
		printf ("%d \n",x);
	}
	
	return 0;
}
