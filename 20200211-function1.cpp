#include <stdio.h>

int add (int num1, int num2)
{
	return num1 + num2;
}

int sub (int num1, int num2)
{
	return num1 - num2;
}

int mux (int num1, int num2)
{
	return num1 * num2;
}

double div (int num1, int num2)
{
	return (double) num1 / num2;
} 

main()
{
	    //printf();        scanf();     main()  �Լ�     function    f(x)
	    //for(i=0;i<=5;i++)     if(i%2 == 0)     �Լ�  x 
	    
	    int result1, result2, result3;
	    double result4;
	    
	    result1 = add(120, 360);
	    result2 = sub(130, 250);
	    result3 = mux(12, 79);
	    result4 = div(79, 19);
	    
	    printf ("%d�Դϴ�. \n", result1);
	    printf ("%d�Դϴ�. \n", result2);
	    printf ("%d�Դϴ�. \n", result3);
	    printf ("%.16lf�Դϴ�. \n", result4);
}
