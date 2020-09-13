#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main(void)
{
	char *text="color ";
	// https://m.blog.naver.com/PostView.nhn?blogId=dgsw102&logNo=221014513405&proxyReferer=https:%2F%2Fwww.google.com%2F
	system(text);
	printf("아무키나 누르면\n");
	printf("이전 색으로 돌아갑니다.\n");
	getch();
	system("color 12");
	// color 선언시 [][] 값 형식.
	// 0 [] 인경우 글자 변경 즉 한자리수는 글자 색 변경만.
	// 0 0 인경우 글자 변경과 배경 변경 즉 두자리 수는 배경과 글자 변경만. 
	// 기본 설정은 07. 
	return 0;
}
