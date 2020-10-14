#include <stdio.h>

int main(void)
{
    int i, j;
    
    char keypad[4][3] = {{'1', '2', '3'},
	                     {'4', '5', '6'},
						 {'7', '8', '9'},
						 {'*', '0', '#'}};
						 
	for (i=0;i<=3;i++)       //세로 먼저     y축 먼저
	{
		for (j=0;j<=2;j++)      //가로     x 
		{
			printf ("%5c", keypad[i][j]);
		}
		printf ("\n");
	}					 
	
	return 0;
}
