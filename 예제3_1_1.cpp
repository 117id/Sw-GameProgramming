#include <stdio.h>
// stdio.h 는 Standard Input/Output library 의 약어
// C 언어의 표준 라이브러리 함수의 ( 매크로 정의,상수,여러 형의 입출력 함수가 포함된 헤더 파일) 
#include <windows.h>
// 윈도우 개발자용 데이터 타입들과 윈도우 API 함수들을 위한 정의
void gotoxy(int x, int y);

int main(void)
{
  gotoxy(0,0);
  printf("Zero");
  // 화면 크기가 정해져 있으므로 좌표 그 이하로 내려가는 것은 불가능힌듯함. 
  gotoxy(1,2);
  printf("T");
  gotoxy(2,4);
  printf("Hello");
  gotoxy(40, 20);
  printf("Hello");
  return 0;
}

// C 언어 함수 선언 한번더 체크 필요성
// https://zapiro.tistory.com/entry/C%EC%96%B8%EC%96%B4-%ED%95%A8%EC%88%98function%EC%9D%98-%EA%B8%B0%EC%B4%88
// https://dojang.io/mod/page/view.php?id=522 (구조체 선언)  

// COORD 
// 원하는 콘솔 커서 좌표를 담은 (x,y) COORD 구조체 변수를 생성
// 구조체 변수 선언(typedef 
// SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
// SetConSoleCursorPosition : 매개변수로 받은 콘솔 스크린 버퍼와 특정 커서 좌표를 가지고 해당 콘솔
// 버퍼의 커서 좌표를 새 좌표로 바꿔주는 역할을 합니다. 

// https://kkikkodev.tistory.com/26

void gotoxy(int x, int y)
{
   COORD Pos = {x - 1, y - 1};
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
   // 이 함수는 첫 번째 인자로 행들 값을 주고 두 번째 인자로 위치 값을 주면 정해진 위치로 커서 이동 
}
