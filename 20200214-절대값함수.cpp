#include <stdio.h>

int Absolute (int num1, int num2);
int GetAbsolute (int num);

int main(void)
{
	int num1, num2;
	printf ("�ΰ��� ���� �Է� : \n");
	scanf ("%d %d", &num1, &num2);
	
	printf ("%d�� %d�߿� ���밪�� ū ���� : %d \n", num1, num2, Absolute(num1, num2));
	
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
