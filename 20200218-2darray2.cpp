#include <stdio.h>

int main(void)
{
	int i, j;
	int sungjuk[3][4] = {{89, 92, 100, 92},
	                    {97, 68, 100, 100},
	                    {100, 100, 100, 100}};
	
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			printf ("%5d", sungjuk[i][j]);
		}
		printf ("\n");
	}
	
	return 0;
}
