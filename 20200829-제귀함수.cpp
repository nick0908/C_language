#include <stdio.h>
#define N 8

int map[N][N]={
	{1,1,1,1,1,1,1,1},
	{1,1,1,1,1,1,1,1},
	{1,1,1,1,1,1,1,1},
	{1,1,1,1,1,1,1,1},
	{1,1,1,0,1,1,1,1},
	{1,1,1,1,1,1,1,1},
	{1,1,1,1,1,1,1,1},
	{1,1,1,1,1,1,1,1}
};

void solve(int x, int y, int k){
	if(k==1){
		printf("%d",map[x][y]);
		return;
	}
	for(int i=x;i<x+k;i++){
		for(int j=y;j<y+k;j++){
			if(map[x][y]!=map[i][j]){
				printf("(");
				solve(x, y, k/2);
				solve(x, y+k/2, k/2);
				solve(x+k/2, y+k/2, k/2);
				solve(x+k/2, y, k/2);
				printf(")");
				return;
			}
		}
	}
	printf("%d",map[x][y]);
	return;
}


int main(void)
{
	solve(0, 0, N);
	return 0;
}
