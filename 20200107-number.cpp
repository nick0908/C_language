#include <stdio.h>

main()
{
	// ������ ������ �ֽ��ϴ�. �ּ��� 
	/* ������ ������ �ֽ��ϴ�. �ּ��� */
	
	int a = 500;            //int integer interger ���� (���, ����, 0)
	int b = -300;
	printf("%d \n%d  \n" , a, b);  //d    decimal   ������
	
	printf ("%d + %d = %d\n", a, b, a+b);
	printf ("%d - %d = %d\n", a, b, a-b);
	printf ("%d * %d = %d\n", a, b, a*b);
	printf ("%d / %d = %.15lf\n", a, b, (double)a/b);        //lf long float
}
