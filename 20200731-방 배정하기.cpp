#include <stdio.h>

int main(void)
{
	int A,B,C,N;
	scanf("%d %d %d %d",&A,&B,&C,&N);
	if(A+B+C == N)
	{
		printf("1");
	}
	else if(B+C == N)
	{
		printf("1");
	}
	else if(A+B == N)
	{
		printf("1");
	}
	else if(A+C == N)
	{
		printf("1");
	}
	else if(A == N)
	{
		printf("1");
	}
	else if(B == N)
	{
		printf("1");
	}
	else if(C == N)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	return 0;
} 
