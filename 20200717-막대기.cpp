#include <stdio.h>

int main(void)
{
	int N,h;
	int a[100000];
	int temp;
	int sum=0;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%d", &a[i]);
	}
	temp = a[N-1];
	for(int i=1;i<=N-1;i++)
	{
		if(temp < a[N-i])
		{
			sum=sum+1;
		}
	}
	printf("%d",sum+1);
	
	return 0; 
}
