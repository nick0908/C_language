#include <stdio.h>

int main(void)
{
	int n,k;
	int array[24] = {};
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(int j=n-1;j>=0;j--)
	{
		printf("%d ",array[j]);
	}
	return 0;
}
