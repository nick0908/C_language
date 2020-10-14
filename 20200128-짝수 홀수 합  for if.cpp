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
			printf ("%d는 짝수입니다.\n", i);
		}
	    else
		{
			sum_odd = sum_odd + i;
			printf ("%d는 홀수입니다.\n", i);
		} 
	}
	printf ("짝수의 합은 %d이고, 홀수의 합은 %d 입니다.", sum_even, sum_odd);
} 
