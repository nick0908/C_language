#include <stdio.h>

main()
{
	int i,n;
	printf ("배수값을 입력하셈. \n");
	scanf ("%d", &n);
	
	for (i=0;i<=100;i++)
	{
		if (i % n == 0)
		{
			printf ("%d는 %d의 배수임.\n", i, n);
		}
	}
}
