#include <stdio.h>

main()
{
	int i,array[5];
	
	for (i=0;i<=4;i++)
	{
		printf ("%d \n", array[i]);
	}
	printf ("\n");
	scanf ("%d", &array[0]);
	scanf ("%d", &array[1]);
	scanf ("%d", &array[2]);
	scanf ("%d", &array[3]);
	scanf ("%d", &array[4]);
	
	for (i=0;i<=4;i++)
	{
		printf ("%d \n", array[i]);
	}
}
