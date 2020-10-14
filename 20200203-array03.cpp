#include <stdio.h>

main()
{
	int array[5];
	
	int i;
	
	for (i=0;i<=4;i++)
	{
		scanf ("%d", &array[i]);
	}
	for (i=0;i<=4;i++)
	{
		printf ("%5d", array[i]);
	}
}
