#include <stdio.h>

main()
{
	//int integer  정수
	//double       실수    %lf
	//float        실수    %f
	
	double a = 26.78;
	double b = 98.21;
	
	printf ("%lf \n", a);
	printf ("%lf \n", b);
	
	printf ("%.10lf \n", b/a);
	
	double c;
	double d;
	
	scanf ("%lf", &c);
	scanf ("%lf", &d);
	
	printf ("lf \n", c);
	printf ("lf \n", d);
}
