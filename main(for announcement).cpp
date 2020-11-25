#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

#define box_length 15 //게임의 영역(좌우 길이) 
#define box_height 15 //바닥의 높이(상하 길이) 

void intro_game(void);	// 게임 설명 
void game_control(void);	// 게임 조작 
void gotoxy(int x, int y);	// 지정 좌표 이동  
int left_right_move(void);	// 좌우 이동 
void move_down(int x);	// 떨어뜨리기 
void draw_rectangle(int c, int r);	// 사각형 그리기 

int max_block(void); // 최고 블록 갯수 

int block_stack[box_length*2+1]={0}; //해당위치의 값을 0으로 초기화

int main(void)
{
	intro_game(); 
	game_control();

	return 0;
}

void intro_game(void)
{
	system("cls");    
	printf("블록 쌓기 \n\n");
	printf("블록이 좌우로 움직일때 스페이스키를 누르면\n");
	printf("블록이 떨어져 바닥에 쌓입니다.\n\n");
	printf("아무키나 누르면 게임을 시작합니다. \n");
	getch();
}

int score(void){


	system("cls");
	printf(" [\tgame이 종료되었습니다.\t]\n\n");
	printf(" [당신의 성적]\n");
	
	switch(max_block()){
		case 1:
			printf(" 대단한 반응 속도입니다!\n"); break;
		case 2 ... 3:
			printf(" 상당한 반응 속도입니다!\n"); break;
		case 4 ... 5:
			printf(" 반응속도를 높여봅시다!\n"); break;
		case 6 ... 10:
			printf(" 의도적이였다면 대단합니다!\n"); break;
		default:
			printf(" 의도적인 기록보다는 자신의 반응속도를 시험해보세요!\n"); break;
		 
	}
}

void game_control(void)
{
	int x, count=0;
	system("cls");
	draw_rectangle(box_length, box_height);
	gotoxy(box_length*2+5,3);
	printf("블록의 개수: %2d", box_height);
	gotoxy(1, box_height+3);
	printf("스페이스키를 누르면 블록이 떨어지고\n");	// 사용법 
	printf("바닥에 쌓입니다. \n");
	while(count<box_height)
	{
		gotoxy(box_length*2+5,4);
		printf("시도한 횟수: %2d", count+1);
		gotoxy(box_length*2+5,5);
		printf("쌓인 블록수: %2d", max_block());
		x=left_right_move();	// 좌우 이동 
		move_down(x);	// 블록 떨어뜨리기 
		count++;
		getch();
	}
	gotoxy(box_length*2+5,5);
	printf("쌓인 블록수: %2d", max_block()); // 마지막 블록 인식 
	score();
}

void gotoxy(int x, int y)
{
   COORD Pos = {x - 1, y - 1};
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

int left_right_move(void)
{
	int x=3, y=2, temp=2;
	do
	{
		x+=temp;
		if (x>(box_length*2)) //x방향 최대값 설정
			temp=-2;
		if (x<3)
		{
			x=3;
			temp=2;
		}

		gotoxy(x, y);
		printf("□");
		Sleep(25); //블록이 좌우로 움직이는 속도를 조절
		gotoxy(x, y);
		printf("  ");

	}while(!kbhit());
	block_stack[x]+=1;
	return x;
}
void move_down(int x)
{
	int y;
	for(y=2;y<box_height+2-block_stack[x];y+=1)
	{
		gotoxy(x, y);
		printf("□");
		Sleep(20);
		gotoxy(x, y);
		printf("  ");
		Sleep(10);
	}
	gotoxy(x,box_height+2-block_stack[x]);
	printf("□");
}
void draw_rectangle(int c, int r) 
{
	// 기본적으로 그릴때  
    int i, j;     
    unsigned char a=0xa6;
    unsigned char b[7]; 
    for(i=1;i<7;i++)
   	b[i]=0xa0+i;
      
    printf("%c%c",a, b[3]); // 상단 좌측 모서리 
    for(i=0;i<2*(c+1);i++)  
  	printf("%c%c", a, b[1]); // 상단 가로 직선 
    printf("%c%c", a, b[4]); // 상단 우측 모서리 
    printf("\n");
    for(i=0;i<r;i++)
    {
	printf("%c%c", a, b[2]); // 좌측 세로 직선 
	for(j=0;j<c+1;j++)
		printf("  "); // 좌측 우측 사이 공간 띄우기 
	printf("%c%c",a, b[2]); // 우측 세로 직선 
	printf("\n"); // 다음  
    }
    printf("%c%c", a, b[6]); //하단 좌측 모서리 
    for(i=0;i<2*(c+1);i++)
	printf("%c%c", a, b[1]); // 하단 가로 직선 
    printf("%c%c", a, b[5]); // 하단 우측 모서리 
    printf("\n"); 
}
int max_block(void)
{
	int i, max=0;
	for(i=1;i<box_height*2;i++)
	{
		if (max<=block_stack[i])
			max=block_stack[i];
	}
	return max;
}

