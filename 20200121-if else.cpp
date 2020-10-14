#include <stdio.h>

main()
{
	int temp;
	
	printf ("오늘 날씨 온도는 ? \n");
	scanf ("%d", &temp);
	
	if (temp < 0)
	{
		printf ("오늘 날씨는 영하이며,");
	}
	else
	{
		printf ("오늘 날씨는 영상이며,");
	}
	
	printf ("현재 온도는 %d 도 입니다.", temp);
}
