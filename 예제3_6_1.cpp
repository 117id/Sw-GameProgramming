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
 // 0 �� ���������� ���α׷��� �����ٴ� ǥ��. 
 // http://mwultong.blogspot.com/2006/07/c-return-return-0.html
}

int menu_display(void)
{
       int select;
       system("cls");
       printf("���� �����\n\n");
       printf("1. �ܹ��� \n");
       printf("2. ���İ�Ƽ\n");
       printf("3. ���α׷� ����\n\n");
       printf("�޴���ȣ �Է�>");
       printf("\n%d",select);
	   select=getch()-48;
       // Esc�� ���� 0�� ������ ���ؼ� ����ϴ� ����.
	   // ����. 
       
       return select;
}

void hamburger(void)
{
	system("cls");
	printf("�ܹ��� ����� ���\n");
	printf("�߷�\n");
	press_any_key();
}

void spaghetti(void)
{
	system("cls");
	printf("���İ�Ƽ ����� ���\n");
	printf("�߷�\n");
	press_any_key();
}

void press_any_key(void)
{
 printf("\n\n");
 printf("�ƹ�Ű�� ������ ���� �޴���...");
 getch();
 // getch()�� �⺻������ Ű���� �Է��� �޴� ������ �մϴ�.
 // ������ �� ���� ���ҷ� ���α׷��� Ű����� ���������� �����ϴ� ������ ��. 
}
