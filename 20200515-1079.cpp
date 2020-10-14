#include <stdio.h>

int main(void)
{
	char bbD;
	
	do
	{
		scanf("%c ",&bbD);
		printf("%c \n",bbD);
	}while (bbD != 'q');
	
	return 0;
}

