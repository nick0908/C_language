#include <stdio.h>

main()
{
	int jumsu;
	
	printf ("score input \n");
	scanf ("%d", &jumsu);
	
	if (jumsu >= 90)
	{
		printf ("A ���� \n");
	}
	else if (jumsu >= 80)
	{
		printf ("B ���� \n");
	}
	else if (jumsu >= 70)
	{
		printf ("C ���� \n");
	}
	else if (jumsu >= 60)
	{
		printf ("D ���� \n");
	}
	else             
	{
		printf ("F ���� \n");
	}
}
