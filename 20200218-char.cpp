#include <stdio.h>

int main(void)
{
	int age;
	double height;
	char gender;
	
	printf ("���� �Է� : ");
	scanf ("%d", &age);
	printf ("Ű �Է� : ");
	scanf ("%lf", &height);
	printf ("���� �Է�(���ڴ� M, ���ڴ� F) : ");
	scanf (" %c", &gender);     //%c�� ���� (��ĭ��.......) 
	
	printf ("\n");
	printf ("���� : %3d \n", age);
	printf ("Ű : %.1lf \n", height);
	printf ("���� : %3c \n", gender);
	printf ("���� : %3d \n", gender);
	
	return 0;
}
