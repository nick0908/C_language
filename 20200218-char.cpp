#include <stdio.h>

int main(void)
{
	int age;
	double height;
	char gender;
	
	printf ("나이 입력 : ");
	scanf ("%d", &age);
	printf ("키 입력 : ");
	scanf ("%lf", &height);
	printf ("성별 입력(남자는 M, 여자는 F) : ");
	scanf (" %c", &gender);     //%c의 오류 (한칸띄어서.......) 
	
	printf ("\n");
	printf ("나이 : %3d \n", age);
	printf ("키 : %.1lf \n", height);
	printf ("성별 : %3c \n", gender);
	printf ("성별 : %3d \n", gender);
	
	return 0;
}
