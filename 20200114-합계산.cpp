#include <stdio.h>

main()
{
	int i,result=0,n;
	
	printf ("어디까지 값을 합할건가요??? \n");
	scanf ("%d", &n);
	
	for(i = 0; i <= n; i++)
	{
		result = result + i;
	}
	printf ("%d", result);
}
