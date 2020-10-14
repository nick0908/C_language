#include <stdio.h>

main()
{
	int i,n,j=0,k=0;
	
	printf ("약수값을 입력하세요. \n");
	scanf ("%d", &n);
	
	for (i=1;i<=n;i++)
	{
		if(n % i == 0)
		{
			j=j+i;
			k=k+1;
		}
	}
	printf ("약수의 합은 %d입니다.\n", j);
	printf ("약수의 개수는 %d입니다.\n", k);
}

