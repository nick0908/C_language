#include <stdio.h>

int NumberCompare (int num1, int num2);             //�Լ��� ���� ���� 

int main(void)
{
	printf ("3�� 4�߿��� ū���� %d�Դϴ�. \n", NumberCompare(3, 4));
	printf ("7�� 2�߿��� ū���� %d�Դϴ�. \n", NumberCompare(7, 2));
    printf ("9�� 9�߿��� ū���� %d�Դϴ�. \n", NumberCompare(9, 9));
	
	return 0;
}

int NumberCompare (int num1, int num2)    //��ȯ��  o        �Ű�����  o 
{
	if (num1 > num2)
	{
		return num1;                    // return 2�� �̻� �ɼ��� ���� 
	}
	else if(num1 == num2)
	{
		printf ("�ΰ��� ���� �����ϴ�.");
		return num1;
	}
	else
	{
		return num2;
	}
}
