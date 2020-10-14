#include <stdio.h>

main()
{
	int ojo;
	
    printf ("input number \n");
    scanf ("%d", &ojo);
    
    if (ojo > 0)
    {
    	printf ("positive number \n");
	}
	if (ojo == 0)
	{
		printf ("zero number \n");
	}
	if(ojo < 0)
	{
		printf ("negative number \n");
	}
}
