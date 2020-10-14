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
	int a, b;
	
	printf ("input number1 : ");
	scanf ("%d", &a);
	printf ("input number2 : ");
	scanf ("%d", &b);
	
	printf ("%d       %d       %d        %.16lf", add(a, b), sub(a, b), mux(a, b), div(a, b));
}
