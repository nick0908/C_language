#include  <stdio.h>

int main(void)
{
	int K,N,Y;
	int sum=0;
	bool S[1000];
	scanf("%d %d",&N,&K);
	for(int i=0;i<N;i++)
	{
		scanf("%d %d",&S,&Y);
		if(N%K == 0)
		{
			sum++;
		}
		else if(K >= N%K >= 1)
		{
			sum=sum+2;
		}
		else
		{
			sum=sum+3;
		}
	}
	printf("%d",sum);
	return 0;
}
