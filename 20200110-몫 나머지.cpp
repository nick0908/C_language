#include <stdio.h>

main()
{
	int result1;    //    /      %
	int result2;
	int num1, num2;
	
	printf("두 정수를 입력하셈");
	scanf("%d %d",&num1,&num2);
	
	result1=num1/num2;
	result2=num1%num2;
	printf("몫 : %d, 나머지 : %d \n", result1, result2);
	printf("%d + %d = %d \n", num1, num2, num1+num2);
	printf("%d - %d = %d \n", num1, num2, num1-num2);
	printf("%d * %d = %d \n", num1, num2, num1*num2);
	
	printf("%d > %d = %d \n", num1, num2, num1>num2);
	printf("%d < %d = %d \n", num1, num2, num1<num2);
	printf("%d >= %d = %d \n", num1, num2, num1>=num2);
	printf("%d <= %d = %d \n", num1, num2, num1<=num2);
	printf("%d == %d = %d \n", num1, num2, num1==num2);
	printf("%d != %d = %d \n", num1, num2, num1!=num2);
}
