#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()
{
	int menu,r,c,a,v;
	
	while (1)
	{
		printf("=========================\n");
		printf("== 1. ���� �ѷ� ���ϱ� ==\n");
		printf("== 2. ���� ���� ���ϱ� ==\n");
		printf("== 3. ���� ���� ���ϱ� ==\n");
		printf("== 4. �׸��α�         ==\n");
		printf("=========================\n");
		
		printf("\n�޴��� �����ϼ���.\n");
		scanf("%d", &menu);
		
		if(menu == 4)
		{
			printf("program shutdown!!!!!!!!!!\n");
			break;
		}
		if (menu == 1 || menu == 2 || menu == 3)
		{
			printf ("������ ���̸� �Է��ϼ���.\n");
			scanf ("%d", &r);
		}
		
		if(menu == 1)
		{
			printf("���� �ѷ��� ó���մϴ�.\n");
			c=2*r*3;
			printf("���� �ѷ��� %d�Դϴ�.\n", c);
		}
		
		else if(menu == 2)
		{
			printf("���� ���̸� ó���մϴ�.\n");
			a=r*r*3;
			printf("���� ���̴� %d�Դϴ�.\n", a);
		}
		
		else if(menu == 3)
		{
			printf("���� ���Ǹ� ó���մϴ�.\n");
			v=(4.0/3.0)*r*r*r*3;
			printf("���� ���Ǵ� %d �Դϴ�.\n", v);
		}
		
		printf("����Ϸ��� �ƹ�Ű�� ��������.\n");
		getch();
		system("cls"); 
	}
}
