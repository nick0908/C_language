#include <stdio.h>

main()
{
	int dan;
	int i;
	int n;
	
	printf ("���ϴ� �������� ���� �Է��ϼ� \n");
	scanf ("%d", &dan);
	printf ("������ ����ұ��? \n");
	scanf ("%d", &n);
	
	
	for (i = 1; i <= n; i++)
	{
		printf ("%d * %d = %d \n", dan, i, dan * i);	
	}
	printf ("����� �� �������ϴ�. \n");
} 
