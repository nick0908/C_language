#include <stdio.h>
#include <conio.h>         //getch()
#include <stdlib.h>        //system()

main()
{
	int i,menu,loop,value;
	
	while (1)
	{
		printf ("=====================\n");
		printf ("== 1. 정수출력하기 ==\n");
		printf ("== 2. 짝수출력하기 ==\n");
		printf ("== 3. 홀수출력하기 ==\n");
		printf ("== 4. 배수출력하기 ==\n");
		printf ("== 5. 약수출력하기 ==\n");
		printf ("== 6. 그만하기     ==\n");
		printf ("=====================\n");
		
		printf ("\n메뉴를 선택하세요.\n");
		scanf ("%d",&menu);
		
		if (menu == 6)
		{
			printf ("program shutdown!!!!!!!!!!!\n");
			break;                  //exit(0);
		}
		
		if (menu == 1 || menu == 2 || menu == 3 || menu == 4 || menu == 5)
		{
			printf ("반복할 횟수를 입력하세요.\n");
			scanf ("%d", &loop);
			printf ("처리할 숫자를 입력하세요.\n");
			scanf ("%d", &value);
		}
		
		if (menu == 1)
		{
			printf ("정수값을 처리합니다.\n");
			for (i=1;i<=loop;i++)
			{
				printf ("정수값은 %d 입니다.\n", i);
			}
		}
		
		else if (menu == 2)
		{
			printf ("짝수값을 처리합니다.\n");
			for (i=1;i<=loop;i++)
			{
				if (i % 2 == 0)       //i % 2 ! = 1
				{
					printf ("짝수값은 %d입니다.\n", i);
				}
			}
		}
		
		else if (menu == 3)
		{
			printf ("홀수값을 처리합니다.\n");
			for (i=1;i<=loop;i++)
			{
				if (i % 2 == 1)
				{
					printf ("홀수값은 %d입니다.\n", i);
				}
			}
		}
		
		
		else if (menu == 4)
		{
			printf ("배수값을 처리합니다.\n");
			for (i=1;i<=loop;i++)
			{
				if (i % value == 0)
				{
					printf ("%d배수값은 %d입니다.\n", value, i);
				}
			}
		}
		
		
		else if (menu == 5)
		{
			printf ("약수값을 처리합니다.\n");
			for (i=1;i<=value;i++)
			{
				if (value % i == 0)
				{
					printf ("%d약수값은 %d입니다.\n", value, i);
				}
			}
		}
		
		printf ("계속하려면 아무키나 누르세요.\n");
		getch();
		system("cls");
	}
}
