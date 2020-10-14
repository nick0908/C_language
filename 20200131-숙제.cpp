#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()
{
	int menu,r,c,a,v;
	
	while (1)
	{
		printf("=========================\n");
		printf("== 1. 원의 둘레 구하기 ==\n");
		printf("== 2. 원의 넓이 구하기 ==\n");
		printf("== 3. 구의 부피 구하기 ==\n");
		printf("== 4. 그만두기         ==\n");
		printf("=========================\n");
		
		printf("\n메뉴를 선택하세요.\n");
		scanf("%d", &menu);
		
		if(menu == 4)
		{
			printf("program shutdown!!!!!!!!!!\n");
			break;
		}
		if (menu == 1 || menu == 2 || menu == 3)
		{
			printf ("반지름 길이를 입력하세요.\n");
			scanf ("%d", &r);
		}
		
		if(menu == 1)
		{
			printf("원의 둘레를 처리합니다.\n");
			c=2*r*3;
			printf("원의 둘레는 %d입니다.\n", c);
		}
		
		else if(menu == 2)
		{
			printf("원의 넓이를 처리합니다.\n");
			a=r*r*3;
			printf("원의 넓이는 %d입니다.\n", a);
		}
		
		else if(menu == 3)
		{
			printf("구의 부피를 처리합니다.\n");
			v=(4.0/3.0)*r*r*r*3;
			printf("구의 부피는 %d 입니다.\n", v);
		}
		
		printf("계속하려면 아무키나 누르세요.\n");
		getch();
		system("cls"); 
	}
}
