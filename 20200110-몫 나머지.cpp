#include <stdio.h>

main()
{
	int result1;    //    /      %
	int result2;
	int num1, num2;
	
	printf("�� ������ �Է��ϼ�");
	scanf("%d %d",&num1,&num2);
	
	result1=num1/num2;
	result2=num1%num2;
	printf("�� : %d, ������ : %d \n", result1, result2);
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
