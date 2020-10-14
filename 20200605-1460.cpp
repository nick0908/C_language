#include <stdio.h>

int main(void)
{
	int n;
	int value = 0;
	int array[100][100] = {};
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			value = value +1;
			array[i][j] = value;
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
