#include <stdio.h>

main()
{
	int i;
	int sum_even=0, sum_odd=0;
	
	for (i = 0; i <= 100; i++)
	{
		if (i % 2 == 0)                 // i % 2 !=1
		{
			sum_even = sum_even + i;
			printf ("%d�� ¦���Դϴ�.\n", i);
		}
	    else
		{
			sum_odd = sum_odd + i;
			printf ("%d�� Ȧ���Դϴ�.\n", i);
		} 
	}
	printf ("¦���� ���� %d�̰�, Ȧ���� ���� %d �Դϴ�.", sum_even, sum_odd);
} 
