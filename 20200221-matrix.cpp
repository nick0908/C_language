#include <stdio.h>

#define M 2                // 매크로 정의 , 상수 2
#define N 3                // 매크로 정의 , 상수 3

int main(void)
{
	int A[M][N], B[M][N], C[M][N];
	
	printf ("Matrix A INPUT \n");
	for (int i = 0; i < M; i++)    // 세로
	{
		for (int j = 0; j < N; j++)   //가로
		{
			printf ("%d행 %d열?", i+1, j+1);
			scanf ("%d", &A[i][j]);
		} 
	}
	
	printf ("\n");
	for (int i = 0; i < M; i++)
	{
		printf ("[ ");
		for (int j = 0; j < N; j++)
		{
			printf ("%2d ", A[i][j]);
		}
		printf ("] \n");
	}
	printf ("Matrix B INPUT \n");
	for (int i = 0; i < M; i++)    // 세로
	{
		for (int j = 0; j < N; j++)   //가로
		{
			printf ("%d행 %d열?", i+1, j+1);
			scanf ("%d", &A[i][j]);
		} 
	}
	
	printf ("\n");
	for (int i = 0; i < M; i++)
	{
		printf ("[ ");
		for (int j = 0; j < N; j++)
		{
			printf ("%2d ", A[i][j]);
		}
		printf ("] \n");
	}
	
	return 0;
}
