#include <stdio.h>

int main(void)
{
	int array[2][5] = {{5, 7, 9, 6, 8}, 
	                   {3, 6, 1, 2, 0}};

    printf ("%d \n", array[0][0]);
    printf ("%d \n", array[0][1]);
    printf ("%d \n", array[0][4]);
    printf ("%d \n", array[1][0]);
    printf ("%d \n", array[1][2]);
    printf ("%d \n", array[1][4]);
    printf ("%d \n", array[1][7]);
	
	
	return 0;
}
