#include <stdio.h>

int num1, num2;                           // �������� 

void HowToUseThisProg(void)              // ��ȯ��  x , �Ű����� x
{
	printf("�� ���� ������ �Է��Ͻø� ��������� ��µ˴ϴ�. \n");
	printf("�� ���� ������ �Է��ϼ���. \n");
}

int ReadNum(void)          //  ��ȯ��   O, �Ű�����  x
{
	int num;
	scanf("%d", &num);
	return num;
}

int Add(int num1, int num2)              // ��ȯ�� o,  �Ű����� o 
{
	return num1+num2;
}

void ShowAddResult(int num)       //  ��ȯ�� x, �Ű�����o
{
	printf ("������� ���: %d \n", num);
} 

int main(void)
{
	int result;
	HowToUseThisProg();
    num1 = ReadNum();
    num2 = ReadNum();
    result = Add(num1, num2);
    ShowAddResult(result);
    
    return 0;
}
