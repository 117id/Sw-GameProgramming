#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char tmp;
		
	while((tmp=getchar()) != '\n')
	{
		putchar(tmp);
	}
		
	printf("\n종료됨\n");

	// while((tmp=getch()) != '\n') 
	// getch()문을 사용할떄 입력값을 받은후 엔터를 누르면 '\r'이 실행되어서 오류가 발생한다. 
	// '\r'은 케리지 리턴으로 커서를 현재 행의 처음 위치로 돌리는 것이다.
	//  캐리지 리턴 : 간단히 리턴은 문자의 새 줄을 시작하는데 쓰이는 제어 문자나 그 구조를 가리킨다. 
	while((tmp=getch()) != '\r')
	{
		putchar(tmp);
	}
		
	printf("\n종료됨\n");
}

