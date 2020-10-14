#include <stdio.h>

int Absolute (int num1, int num2);
int GetAbsolute (int num);

int main(void)
{
	int num1, num2;
	printf ("두개의 정수 입력 : \n");
	scanf ("%d %d", &num1, &num2);
	
	printf ("%d와 %d중에 절대값이 큰 정수 : %d \n", num1, num2, Absolute(num1, num2));
	
	return 0;
}

int Absolute (int num1, int num2)
{
    if (GetAbsolute(num1) > GetAbsolute(num2))
    {
    	return num1;
	}
	else
	{
		return num2;
	}
}

int GetAbsolute (int num)
{
	if (num < 0)
	{
		return num * (-1);
	}
	else
	{
		return num;
	}
}
