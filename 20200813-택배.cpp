#include <stdio.h>

int main(void)
{
	int N,C,M[1000][2],n;
	int sum;
	scanf("%d %d",&N,&C);
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&M[i][2]);
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=1;j<=n-1;j++)
		{
			if(M[i][0] == i+1)
			{
				sum = sum + M[i][2];
			}
		}
		if(sum > C)
		{
			for(int j=0;j<n-1;j++)
			{
				
			}
		}
	}
}
