#include <stdio.h>
// stdio.h �� Standard Input/Output library �� ���
// C ����� ǥ�� ���̺귯�� �Լ��� ( ��ũ�� ����,���,���� ���� ����� �Լ��� ���Ե� ��� ����) 
#include <windows.h>
// ������ �����ڿ� ������ Ÿ�Ե�� ������ API �Լ����� ���� ����
void gotoxy(int x, int y);

int main(void)
{
  gotoxy(0,0);
  printf("Zero");
  // ȭ�� ũ�Ⱑ ������ �����Ƿ� ��ǥ �� ���Ϸ� �������� ���� �Ұ���������. 
  gotoxy(1,2);
  printf("T");
  gotoxy(2,4);
  printf("Hello");
  gotoxy(40, 20);
  printf("Hello");
  return 0;
}

// C ��� �Լ� ���� �ѹ��� üũ �ʿ伺
// https://zapiro.tistory.com/entry/C%EC%96%B8%EC%96%B4-%ED%95%A8%EC%88%98function%EC%9D%98-%EA%B8%B0%EC%B4%88
// https://dojang.io/mod/page/view.php?id=522 (����ü ����)  

// COORD 
// ���ϴ� �ܼ� Ŀ�� ��ǥ�� ���� (x,y) COORD ����ü ������ ����
// ����ü ���� ����(typedef 
// SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
// SetConSoleCursorPosition : �Ű������� ���� �ܼ� ��ũ�� ���ۿ� Ư�� Ŀ�� ��ǥ�� ������ �ش� �ܼ�
// ������ Ŀ�� ��ǥ�� �� ��ǥ�� �ٲ��ִ� ������ �մϴ�. 

// https://kkikkodev.tistory.com/26

void gotoxy(int x, int y)
{
   COORD Pos = {x - 1, y - 1};
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
   // �� �Լ��� ù ��° ���ڷ� ��� ���� �ְ� �� ��° ���ڷ� ��ġ ���� �ָ� ������ ��ġ�� Ŀ�� �̵� 
}
