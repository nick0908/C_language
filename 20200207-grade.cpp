#include <stdio.h>

main()
{
    int grade[] = {90, 56, 100, 78, 65, 4, 99, 43, 93, 23};
    int i, total = 0;
    
    for (i=0;i<=9;i++)
    {
    	printf ("%5d \n", grade[i]);
    	total = total + grade[i];
	}
	printf ("성적의 총합은 %d 입니다. \n", total);
	printf ("성적의 평균은 %lf 입니다. \n", (double)total/10);
}
