#include <stdio.h>

main()
{
	int i;
	for (i = 0; i <= 100; i++)
	{
		if (i % 2 == 0)                 // i % 2 !=1
		{
			printf ("%d�� ¦���Դϴ�.\n", i);
		}
	    else
		{
			printf ("%d�� Ȧ���Դϴ�.\n", i);
		} 
	}
} 
