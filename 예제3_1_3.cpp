#include <stdio.h>
#include <stdlib.h>
// 문자열 변환, 의사 난수 생성, 동적 메모리 관리 등의 함수포함. 
int main(void)
// void 값 지워도 상관 없다. 
{
  char ch;
  printf("문자를 입력하고 Enter>");
  scanf("%c", &ch);
  system("cls");
  // cmd - cls : 화면 지우는 명령어 
  
  // 프로세스 관련 함수
  // System 함수는 인수로 실핼시킬 프로세스의 이름을 받아 그 프로세스 호출하는 역할
  // 프로세스가 종료될 때까지 기다려주는 역할
  // System 함수는 도스 명령을 실행합니다.
   
  system("dir");
  // cmd - dir : 경로의 폴더 및 파일들 나열 
  // http://forum.falinux.com/zbxe/index.php?document_srl=868968&mid=lecture_tip
  // http://blog.daum.net/naturelove87/204
  system("type 예제3_1_3.cpp");
  printf("입력된 문자 %c\n", ch);
  return 0;
}


