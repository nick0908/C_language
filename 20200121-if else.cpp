#include <stdio.h>

main()
{
	int temp;
	
	printf ("���� ���� �µ��� ? \n");
	scanf ("%d", &temp);
	
	if (temp < 0)
	{
		printf ("���� ������ �����̸�,");
	}
	else
	{
		printf ("���� ������ �����̸�,");
	}
	
	printf ("���� �µ��� %d �� �Դϴ�.", temp);
}
