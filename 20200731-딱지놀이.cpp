#include <stdio.h>

int main(void)
{
	int a,b,N;
	int n[1000];
	int num[1000];
	int temp=0;
	int amax[1000];
	int bmax[1000];
	int win[1000];
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%d",&a);
		for(int j=0;j<a;j++)
		{
			scanf("%d",&n[j]);
		}
		scanf("%d",&b);
		for(int k=0;k<b;k++)
		{
			scanf("%d",&num[k]);
		}
		for(int j=0;j<a;j++)
		{
			amax[j] = n[j];
			for(int k=j+1;k<a;k++)
			{
				if(amax[j] < n[k])
				{	
		    		temp = amax[j];
					amax[j] = n[k];
		    		n[k] = temp;
				}
			}
		}
		for(int j=0;j<b;j++)
		{
			bmax[j] = num[j];
			for(int k=j+1;k<b;k++)
			{
				if(bmax[j] < num[k])
				{
		    		temp = bmax[j];
					bmax[j] = num[k];
		    		num[k] = temp;
				}
			}
		}
		if(a > b)
		{
			for(int j=0;j<b;j++)
			{
				if(amax[j] > bmax[j])
				{
					win[i] = 0;
					j = b;
				}
				else if(amax[j] < bmax[j])
				{
					win[i] = 1;
					j = b;
				}
				else
				{
					win[i] = 2;
				}
					
			}
			if(win[i] == 2)
			{
				win[i] = 0;
			}
		}
		else if(a < b)
		{
			for(int j=0;j<a;j++)
			{
				if(amax[j] > bmax[j])
				{
					win[i] = 0;
					j = a;
				}
				else if(amax[j] < bmax[j])
				{
					win[i] = 1;
					j = a;
				}
				else
				{
					win[i] = 2;
				}
			}
			if(win[i] == 2)
			{
				win[i] == 1;
			}
		}
		else
		{
			for(int j=0;j<a;j++)
			{
				if(amax[j] > bmax[j])
				{
					win[i] = 0;
					j = a;
				}
				else if(amax[j] < bmax[j])
				{
					win[i] = 1;
					j = a;
				}
				else
				{
					win[i] = 2;
				}
			}
			if(win[i] == 2)
			{
				win[i] == 2;
			}
		}
	}
	for(int i=0;i<N;i++)
	{
		if(win[i] == 0)
		{
			printf("A\n");
		}
		else if(win[i] == 1)
		{
			printf("B\n");
		}
		else if(win[i] == 2)
		{
			printf("D\n");
		}
	}
	return 0;
}
