#include <stdio.h>

int NumberCompare (int num1, int num2);             //함수의 원형 선언 

int main(void)
{
	printf ("3과 4중에서 큰수는 %d입니다. \n", NumberCompare(3, 4));
	printf ("7과 2중에서 큰수는 %d입니다. \n", NumberCompare(7, 2));
    printf ("9과 9중에서 큰수는 %d입니다. \n", NumberCompare(9, 9));
	
	return 0;
}

int NumberCompare (int num1, int num2)    //반환값  o        매개변수  o 
{
	if (num1 > num2)
	{
		return num1;                    // return 2개 이상 될수도 있음 
	}
	else if(num1 == num2)
	{
		printf ("두개의 값이 같습니다.");
		return num1;
	}
	else
	{
		return num2;
	}
}
