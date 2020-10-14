#include <stdio.h>

main()
{
	int zzz;
	
	printf ("input number \n");
	scanf ("%d", &zzz);
	if (zzz % 2 == 0  &&  zzz % 7 == 0)           //또는 || 
	{
		printf ("2의 배수 이자 7의 배수입니다. \n");
	}
	else
	{
		printf ("아닙니다. \n");
	}
}
