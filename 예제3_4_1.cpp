#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main(void)
{
	char *text="color ";
	// https://m.blog.naver.com/PostView.nhn?blogId=dgsw102&logNo=221014513405&proxyReferer=https:%2F%2Fwww.google.com%2F
	system(text);
	printf("�ƹ�Ű�� ������\n");
	printf("���� ������ ���ư��ϴ�.\n");
	getch();
	system("color 12");
	// color ����� [][] �� ����.
	// 0 [] �ΰ�� ���� ���� �� ���ڸ����� ���� �� ���游.
	// 0 0 �ΰ�� ���� ����� ��� ���� �� ���ڸ� ���� ���� ���� ���游. 
	// �⺻ ������ 07. 
	return 0;
}
