#include <stdio.h>

main()
{
	int i,result=0,n;
	
	printf ("������ ���� ���Ұǰ���??? \n");
	scanf ("%d", &n);
	
	for(i = 0; i <= n; i++)
	{
		result = result + i;
	}
	printf ("%d", result);
}
