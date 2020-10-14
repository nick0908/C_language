#include <stdio.h>

int main(void)
{
	int n,j;
	int array[24] = {};
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	j=array[0];
	for(int i=1;i<n;i++)
	{
		if(j>array[i])
		{
			j=array[i];
		}
	}
	printf("%d",j);
	return 0;
}
