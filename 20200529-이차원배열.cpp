#include <stdio.h>

int main(void)
{
	int sungjuk[3][6] = {{100, 97, 98, 70, 90, 15},
	                     { 78, 65, 55, 90,  0, 27},
					     { 45, 67, 21, 70, 45, 32}};
					   
	for(int i=0;i<=2;i++)
	{
		for(int j=0;j<=5;j++)
		{
			printf("%d ", sungjuk[i][j]);
		}
		printf("\n");
	}
	 
	return 0;
}
