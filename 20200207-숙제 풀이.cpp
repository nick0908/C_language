#include <stdio.h>

main()
{
	int day;
	int car[5];
	int i;
	int count = 0;
	
	scanf ("%d", &day);
	scanf ("%d %d %d %d %d", &car[0], &car[1], &car[2], &car[3], &car[4]);
	
	for (i=0;i<=4;i++)
	{
		if (day == car[i])
		{
			count = count + 1;
		}
	}
	printf ("%d", count);
}
