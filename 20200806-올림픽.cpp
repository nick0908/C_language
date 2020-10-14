#include <stdio.h>

int n,find,m[1002][7];

int main(void)
{
	int i,num,cnt=1;
	
	scanf("%d %d",&n,&find);
	
	for(i=1;i<=n;i++)
	{
		scanf("%d %d %d %d",&m[i][1],&m[i][2],&m[i][3],&m[i][4]);
		if(m[i][1]==find)
		{
			num=i;
		}
	}
	for(i=1;i<=n;i++)
	{
		if(m[i][2]>m[num][2])
		    cnt++;
		if(m[i][2]==m[num][2]&&m[i][3]>m[num][3])
		    cnt++;
		if(m[i][2]==m[num][2]&&m[i][3]==m[num][3]&&m[i][4]>m[num][4])
		    cnt++;
	}
	printf("%d",cnt);
	return 0;
}
