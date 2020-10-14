#include <stdio.h>

main()
{
	int dan;
	int i;
	int n;
	
	printf ("원하는 구구단의 단을 입력하셈 \n");
	scanf ("%d", &dan);
	printf ("어디까지 계산할까요? \n");
	scanf ("%d", &n);
	
	
	for (i = 1; i <= n; i++)
	{
		printf ("%d * %d = %d \n", dan, i, dan * i);	
	}
	printf ("계산이 다 끝났습니다. \n");
} 
