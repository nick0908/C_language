#include <stdio.h>

main()
{
	int i,n,j=0,k=0;
	
	printf ("������� �Է��ϼ���. \n");
	scanf ("%d", &n);
	
	for (i=1;i<=n;i++)
	{
		if(n % i == 0)
		{
			j=j+i;
			k=k+1;
		}
	}
	printf ("����� ���� %d�Դϴ�.\n", j);
	printf ("����� ������ %d�Դϴ�.\n", k);
}

