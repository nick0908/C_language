#include <stdio.h>

int main(void)
{
	//int    integer            ����        %d        decimal      o
	//double                    �Ǽ�        %lf       long float   o
	//float   floating point    �Ǽ�        %f                     x
	//char    character         ����        %c        character    -  ������
	//�迭                      ���ڿ�      %s        string
	
    char munja1 = 'a';         //����ó���� ��������ǥ 
	
	printf ("%c  \n", munja1);
	printf ("%d  \n", munja1);        //�ƽ�Ű�ڵ�  �ڵ�   
	
	char munja2;
	
	scanf ("%c", &munja2);
	printf ("%c  \n", munja2);
	printf ("%d  \n", munja2);
	
	
	return 0; 
}
