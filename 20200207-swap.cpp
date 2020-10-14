#include <stdio.h>

main()
{
	int a = 90;
	int b = 10;
	int temp;
	
	printf ("%d \n", a);
	printf ("%d \n", b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf ("%d \n", a);
	printf ("%d \n", b);
}
