#include <stdio.h>

main()
{
    int grade[] = {90254390, 5683523, 10000000, 7842452389, 659487, 4029384, 992098354, 43234598, 93298435, 2300000};
    int i;
    int max = grade[0];
    
    for (i=0;i<=9;i++)
    {
    	if (max < grade[i])
    	{
    		max = grade[i];
		}
	}
	printf ("배열에서의 최대값은 %d 입니다. \n", max);
}
