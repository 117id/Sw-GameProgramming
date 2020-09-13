#include <stdio.h>
#include <windows.h>
void gotoxy(int x, int y);
void axis(void);
void draw_xy_line02(int a, int b);
int main(void)
{
	int a, b;
	printf("y=ax+b의 직선 식을 좌표에 출력\n");
	printf("기울기 입력>");
	scanf("%d", &a);
	printf("절편 입력>");
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
	// y좌표 그리기 
	{
		gotoxy(39,i);
		printf("|");
	}
	for(i=1;i<=79;i+=1)
	// x좌표 그리기  
	{
		gotoxy(i, 12);
		printf("-");
	}
	gotoxy(39,12);
	printf("+"); // 중앙표시  
}
void draw_xy_line02(int a, int b)
{
	int x, y, xt, yt;
	gotoxy(1,1);
	printf("y=%dx%+d\n", a, b);
	// axis 그래프 긋기는
	// 해당위치로 바로 이동해서 값을 입력하는 형식이라 줄 구분을 해주지 않아도 된다. 
	for(x=-5;x<=5;x+=1)
	{
		y=a*x+b;
		// Ex) [x=1,y=0] -5 -4 ~ 4 5
		xt=39+2*x; // 2*x는 그래프 그리기 용도 
		// Ex) [x=1] 29 31 ~ 47 49
		yt=12-y; // cmd 환경에서 - | 형식으로 그림으로 인해서 약간의 시각적 착각이 있는편. 
		
		if ( (1<=yt) && (yt<=23))
		{
			gotoxy(xt, yt);
			printf("*");
		}
	}
}

