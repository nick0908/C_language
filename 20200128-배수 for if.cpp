#include <stdio.h>

main()
{
	int i,n;
	printf ("������� �Է��ϼ�. \n");
	scanf ("%d", &n);
	
	for (i=0;i<=100;i++)
	{
		if (i % n == 0)
		{
			printf ("%d�� %d�� �����.\n", i, n);
		}
	}
}
