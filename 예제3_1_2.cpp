#include <stdio.h>
#include <windows.h>
void gotoxy(int x, int y);
int main(void)
{
//  char a[10] = "one";   char b[10] = "tw"; 
// https://m.blog.naver.com/PostView.nhn?blogId=sharonichoya&logNo=220488567828&proxyReferer=https:%2F%2Fwww.google.com%2F

  for(int i=1;i<=9;i++)
  {
     gotoxy(35, 5+i);
     printf("%d*%d=%2d",3,i,3*i);
	 // printf("%s=%2s",a,b);
     // %2d : %[-]d 숫자에 따라 자간 거리가 정해진다.  => (X)
     // 정수형 선언시에 %[-]d는 자릿수 선언 표현이다. 	
  }
  printf("\n");
  return 0;
}

void gotoxy(int x, int y)
{
   COORD Pos = {x - 1, y - 1};
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
