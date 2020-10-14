#include <stdio.h>

int main(void)
{
	int n;
	int array[100][100] = {};
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>0;j--)
		{
			array[i][j] = (i-1)*n+j;
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
