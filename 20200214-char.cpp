#include <stdio.h>

int main(void)
{
	//int    integer            정수        %d        decimal      o
	//double                    실수        %lf       long float   o
	//float   floating point    실수        %f                     x
	//char    character         문자        %c        character    -  정수형
	//배열                      문자열      %s        string
	
    char munja1 = 'a';         //문자처리는 작은따옴표 
	
	printf ("%c  \n", munja1);
	printf ("%d  \n", munja1);        //아스키코드  코드   
	
	char munja2;
	
	scanf ("%c", &munja2);
	printf ("%c  \n", munja2);
	printf ("%d  \n", munja2);
	
	
	return 0; 
}
