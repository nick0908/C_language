#include <stdio.h>

main()
{
	int jumsu;
	
	printf ("score input \n");
	scanf ("%d", &jumsu);
	
	if (jumsu >= 90)
	{
		printf ("A 학점 \n");
	}
	else if (jumsu >= 80)
	{
		printf ("B 학점 \n");
	}
	else if (jumsu >= 70)
	{
		printf ("C 학점 \n");
	}
	else if (jumsu >= 60)
	{
		printf ("D 학점 \n");
	}
	else             
	{
		printf ("F 학점 \n");
	}
}
