#include <stdio.h>

main()
{
	int i,n;
	int total=0;
	int count=0;
	
	printf ("������� �Է��ϼ�. \n");
	scanf ("%d", &n);
	
	for (i=1;i<=n;i++)
	{
		if(n % i == 0)
		{
			printf ("%d�� %d�� �����. \n", i, n);
			total = total+i;
			count = count+1;
		}
	}
	
	printf ("%d�� ������� ���Դϴ�. \n", total);
	printf ("%d�� ����� �����Դϴ�. \n", count);
}
