#include <stdio.h>

int main(void)
{
	int n,j;
	int array[24] = {};
	
	scanf ("%d", &n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%d", &j);
		array[j]++;
	}
	
	for(int i=1;i<24;i++)
	{
		printf("%d ",array[i]);
	}
	
	return 0;
}
