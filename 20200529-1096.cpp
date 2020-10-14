#include <stdio.h>

int main(void)
{
	int n,a,b;
	int badook[20][20] = {};
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&a,&b);
		badook[a][b] = 1;
	}
	for(int i=1;i<=19;i++)
	{
		for(int j=1;j<=19;j++)
		{
			printf("%d ", badook[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
