#include <stdio.h>

main()
{
	int abc;
	
	printf ("input number \n");
	scanf ("%d", &abc);
	
	if (abc % 2 == 0)
	{
		printf ("even \n");         //짝수  오른손잡이 
	}
	else 
	{
		printf ("odd \n");          //홀수  왼손잡이 
	}
}
