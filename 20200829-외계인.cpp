#include <stdio.h>

char arr[4];

void result()
{
	int i;
	for(i=0;i<4;i++)
	{
		if(arr[i]=='C')
			printf("��\t");
		else if(arr[i]=='S')
			printf("�׸�\t");
		else if(arr[i]=='T')
			printf("����\t");
		else if(arr[i]=='+')
			printf("���\t");
		else if(arr[i]=='-')
			printf("ª��\t");
		else
			printf("*\t");
	}
	printf("\n");
}


void H(char h)
{
	arr[0]=h;
	result();
}

void B(char b)
{
	arr[1]=b;
	result();
}

void L(char l)
{
	arr[3]=l;
	result();
}

void A(char a)
{
	arr[2]=a;
	result();
}


int main(void)
{
	printf("�Ӹ�\t��\t��\t�ٸ�\n");
	printf("----------------------------------------\n");
	H('T'), L('+'), B('T'), A('+'), H('C'), A('-'), B('C');
}
