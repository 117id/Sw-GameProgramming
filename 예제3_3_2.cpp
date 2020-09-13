#include <stdio.h>
#include <windows.h>
void gotoxy(int x, int y);
void axis(void);
void draw_xy_line02(int a, int b);
int main(void)
{
	int a, b;
	printf("y=ax+b�� ���� ���� ��ǥ�� ���\n");
	printf("���� �Է�>");
	scanf("%d", &a);
	printf("���� �Է�>");
	scanf("%d", &b);
	system("cls");
	axis();
	draw_xy_line02(a, b);
	gotoxy(1, 23);
//	printf("\n");
	return 0;

}
void gotoxy(int x, int y)
{
   COORD Pos = {x - 1, y - 1};
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
void axis(void)
{
	int i;
	for(i=1;i<=24;i+=1)
	// y��ǥ �׸��� 
	{
		gotoxy(39,i);
		printf("|");
	}
	for(i=1;i<=79;i+=1)
	// x��ǥ �׸���  
	{
		gotoxy(i, 12);
		printf("-");
	}
	gotoxy(39,12);
	printf("+"); // �߾�ǥ��  
}
void draw_xy_line02(int a, int b)
{
	int x, y, xt, yt;
	gotoxy(1,1);
	printf("y=%dx%+d\n", a, b);
	// axis �׷��� �߱��
	// �ش���ġ�� �ٷ� �̵��ؼ� ���� �Է��ϴ� �����̶� �� ������ ������ �ʾƵ� �ȴ�. 
	for(x=-5;x<=5;x+=1)
	{
		y=a*x+b;
		// Ex) [x=1,y=0] -5 -4 ~ 4 5
		xt=39+2*x; // 2*x�� �׷��� �׸��� �뵵 
		// Ex) [x=1] 29 31 ~ 47 49
		yt=12-y; // cmd ȯ�濡�� - | �������� �׸����� ���ؼ� �ణ�� �ð��� ������ �ִ���. 
		
		if ( (1<=yt) && (yt<=23))
		{
			gotoxy(xt, yt);
			printf("*");
		}
	}
}

