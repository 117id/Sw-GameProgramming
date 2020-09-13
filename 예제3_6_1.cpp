#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int menu_display(void);
void hamburger(void);
void spaghetti(void);
void press_any_key(void);

int main(void)
{
 int c;
 while((c=menu_display()) != 3)
 {
  switch(c)
   {
    case 1 : hamburger();
  		break;
    case 2 : spaghetti();
		break;
    default : break;
   }
 }
 return 0;
 // 0 은 성공적으로 프로그램이 끝났다는 표현. 
 // http://mwultong.blogspot.com/2006/07/c-return-return-0.html
}

int menu_display(void)
{
       int select;
       system("cls");
       printf("간식 만들기\n\n");
       printf("1. 햄버거 \n");
       printf("2. 스파게티\n");
       printf("3. 프로그램 종료\n\n");
       printf("메뉴번호 입력>");
       printf("\n%d",select);
	   select=getch()-48;
       // Esc와 숫자 0의 구분을 위해서 사용하는 듯함.
	   // 질문. 
       
       return select;
}

void hamburger(void)
{
	system("cls");
	printf("햄버거 만드는 방법\n");
	printf("중략\n");
	press_any_key();
}

void spaghetti(void)
{
	system("cls");
	printf("스파게티 만드는 방법\n");
	printf("중략\n");
	press_any_key();
}

void press_any_key(void)
{
 printf("\n\n");
 printf("아무키나 누르면 메인 메뉴로...");
 getch();
 // getch()는 기본적으로 키보드 입력을 받는 역할을 합니다.
 // 하지만 그 외의 역할로 프로그램을 키보드로 누를때까지 정지하는 역할을 함. 
}
