#include <stdio.h>

main()
{
	int jumsu;
	
	printf ("score input \n");
	scanf ("%d", &jumsu);
	
	if (jumsu >= 90)
	{
		if (jumsu >= 97)
		{
			printf ("A+����");
		}
		else if (jumsu >= 94)
		{
			printf ("A����");
		}
		else
		{
			printf ("A-����");
		}
	}
    else if (jumsu >= 80)
	{
		if (jumsu >= 87)
		{
			printf ("B+����");
		}
		else if (jumsu >= 84)
		{
			printf ("B����");
		}
		else
		{
			printf ("B-����");
		}
	}
	else if (jumsu >= 70)
	{
		if (jumsu >= 77)
		{
			printf ("C+����");
		}
		else if (jumsu >= 74)
		{
			printf ("C����");
		}
		else
		{
			printf ("C-����");
		}
	}
	else if (jumsu >= 60)
	{
		if (jumsu >= 67)
		{
			printf ("D+����");
		}
		else if (jumsu >= 64)
		{
			printf ("D����");
		}
		else
		{
			printf ("D-����");
		}
	}
	else             
	{
		printf ("F ���� \n");
	}
}
