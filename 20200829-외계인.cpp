#include <stdio.h>

char arr[4];

void result()
{
	int i;
	for(i=0;i<4;i++)
	{
		if(arr[i]=='C')
			printf("¿ø\t");
		else if(arr[i]=='S')
			printf("³×¸ð\t");
		else if(arr[i]=='T')
			printf("¼¼¸ð\t");
		else if(arr[i]=='+')
			printf("±æ°Ô\t");
		else if(arr[i]=='-')
			printf("Âª°Ô\t");
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
	printf("¸Ó¸®\t¸ö\tÆÈ\t´Ù¸®\n");
	printf("----------------------------------------\n");
	H('T'), L('+'), B('T'), A('+'), H('C'), A('-'), B('C');
}
