#include <stdio.h>

main()
{
	int i,n;
	int total=0;
	int count=0;
	
	printf ("약수값을 입력하셈. \n");
	scanf ("%d", &n);
	
	for (i=1;i<=n;i++)
	{
		if(n % i == 0)
		{
			printf ("%d는 %d의 약수임. \n", i, n);
			total = total+i;
			count = count+1;
		}
	}
	
	printf ("%d는 약수값의 합입니다. \n", total);
	printf ("%d는 약수의 개수입니다. \n", count);
}
