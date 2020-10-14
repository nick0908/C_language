#include <stdio.h>

int main(void)
{
	char character,t='a';
	scanf("%c",&character);
	do
	{
		printf("%c ",t);
		t++;
	}while(character >= t);
	return 0;
}
