#include <stdio.h>

main()
{
	int zzz;
	
	printf ("input number \n");
	scanf ("%d", &zzz);
	if (zzz % 2 == 0  &&  zzz % 7 == 0)           //�Ǵ� || 
	{
		printf ("2�� ��� ���� 7�� ����Դϴ�. \n");
	}
	else
	{
		printf ("�ƴմϴ�. \n");
	}
}
