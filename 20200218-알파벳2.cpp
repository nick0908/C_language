#include <stdio.h>

int main(void)
{
	char start, ch;
	
	for (start='z'; start>='a'; start--)
	{
		// �� �� ���� �κ��� ���ӵ� �� ĭ ����ϱ�
		for (ch='a'; ch<start;ch++)
		    printf(" ");
			
	    // �� ĭ �ڿ� ���ĺ��� start���� 'z'���� ����ϱ�
		for (ch=start;ch<='z'; ch++)
		    printf ("%c", ch);
			
	    printf ("\n"); // ���ĺ� ��� �� �� �ٲٱ� 
	}
	return 0;
}

/* �� ó���� start�� a���� z���� �ִµ� z�� �� ó���̴�.
�� ������ ch�� �� ���� ���� �κп� ���ӵ� �� ĭ�� ����� �� ���� ���̴�.
�� ������ ch, start�� �� ĭ ������ ���ĺ��� start���� z���� ����ϴ� ���̴�.
�������� printf�� ���ĺ� ��� �� ���� �ٲٴ� ���̴�.*/
