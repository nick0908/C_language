#include <stdio.h>
#include <conio.h>         //getch()
#include <stdlib.h>        //system()

main()
{
	int i,menu,loop,value;
	
	while (1)
	{
		printf ("=====================\n");
		printf ("== 1. ��������ϱ� ==\n");
		printf ("== 2. ¦������ϱ� ==\n");
		printf ("== 3. Ȧ������ϱ� ==\n");
		printf ("== 4. �������ϱ� ==\n");
		printf ("== 5. �������ϱ� ==\n");
		printf ("== 6. �׸��ϱ�     ==\n");
		printf ("=====================\n");
		
		printf ("\n�޴��� �����ϼ���.\n");
		scanf ("%d",&menu);
		
		if (menu == 6)
		{
			printf ("program shutdown!!!!!!!!!!!\n");
			break;                  //exit(0);
		}
		
		if (menu == 1 || menu == 2 || menu == 3 || menu == 4 || menu == 5)
		{
			printf ("�ݺ��� Ƚ���� �Է��ϼ���.\n");
			scanf ("%d", &loop);
			printf ("ó���� ���ڸ� �Է��ϼ���.\n");
			scanf ("%d", &value);
		}
		
		if (menu == 1)
		{
			printf ("�������� ó���մϴ�.\n");
			for (i=1;i<=loop;i++)
			{
				printf ("�������� %d �Դϴ�.\n", i);
			}
		}
		
		else if (menu == 2)
		{
			printf ("¦������ ó���մϴ�.\n");
			for (i=1;i<=loop;i++)
			{
				if (i % 2 == 0)       //i % 2 ! = 1
				{
					printf ("¦������ %d�Դϴ�.\n", i);
				}
			}
		}
		
		else if (menu == 3)
		{
			printf ("Ȧ������ ó���մϴ�.\n");
			for (i=1;i<=loop;i++)
			{
				if (i % 2 == 1)
				{
					printf ("Ȧ������ %d�Դϴ�.\n", i);
				}
			}
		}
		
		
		else if (menu == 4)
		{
			printf ("������� ó���մϴ�.\n");
			for (i=1;i<=loop;i++)
			{
				if (i % value == 0)
				{
					printf ("%d������� %d�Դϴ�.\n", value, i);
				}
			}
		}
		
		
		else if (menu == 5)
		{
			printf ("������� ó���մϴ�.\n");
			for (i=1;i<=value;i++)
			{
				if (value % i == 0)
				{
					printf ("%d������� %d�Դϴ�.\n", value, i);
				}
			}
		}
		
		printf ("����Ϸ��� �ƹ�Ű�� ��������.\n");
		getch();
		system("cls");
	}
}
