#include <stdio.h>

main()
{
	// 설명을 쓸수가 있습니다. 주석문 
	/* 설명을 쓸수가 있습니다. 주석문 */
	
	int a = 500;            //int integer interger 정수 (양수, 음수, 0)
	int b = -300;
	printf("%d \n%d  \n" , a, b);  //d    decimal   십진수
	
	printf ("%d + %d = %d\n", a, b, a+b);
	printf ("%d - %d = %d\n", a, b, a-b);
	printf ("%d * %d = %d\n", a, b, a*b);
	printf ("%d / %d = %.15lf\n", a, b, (double)a/b);        //lf long float
}
