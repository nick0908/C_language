#include <stdio.h>

int main(void)
{
	int i,n;
	scanf("%x",&n);
	
	for(i=1;i<=15;i++)
	{
		printf("%X*%X=%X \n",n,i,n*i);
	}
	return 0;
}
