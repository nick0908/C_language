#include <stdio.h>

int main(void)
{
	char start, ch;
	
	for (start='z'; start>='a'; start--)
	{
		// 각 행 시작 부분의 연속된 빈 칸 출력하기
		for (ch='a'; ch<start;ch++)
		    printf(" ");
			
	    // 빈 칸 뒤에 알파벳을 start부터 'z'까지 출력하기
		for (ch=start;ch<='z'; ch++)
		    printf ("%c", ch);
			
	    printf ("\n"); // 알파벳 출력 후 행 바꾸기 
	}
	return 0;
}

/* 맨 처음의 start는 a부터 z까지 있는데 z가 맨 처음이다.
그 다음의 ch는 각 행의 시작 부분에 연속된 빈 칸을 출력할 때 쓰는 것이다.
그 다음의 ch, start는 빈 칸 다음에 알파벳을 start부터 z까지 출력하는 것이다.
마지막의 printf는 알파벳 출력 후 행을 바꾸는 것이다.*/
