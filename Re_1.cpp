#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a=0,b=0;
	
	if(a==0 && b==0){
		char ch;
		
		ch = getchar();
		printf("%c",ch);
		
		printf("\n");
	  /*
  1) getchar() - #include<stdio.h>
  	- �Է��� �ϸ� �ٷ� ���� ���� �ƴ϶� �Է� ���ۿ� �����.
	- ���Ͱ� ���� �� ���� �Է��� ��� ��Ƶδٰ� ���Ͱ� ������ �Է� ������ */
	}
	printf("getchar \n");
	a = 0,b=1;
	
	if(a==0 && b==1){
		char ch;
		
		ch = getch();
		printf("%c",ch);
		
		printf("\n");
	 /*
  2) getch() - #include<conio.h> 
  	- ���� ������� ����.
	- getch()�� ���� �Է��� �� ���� ��ٸ��� �ʴ´�
	- K�� �Է��� �� ���� ���� ���� �ٷ� ch ���� ���� printf()���� ���ؼ� ��µȴ�.
	- Ű���忡�� K�� �������� getch()�� �Է� ���� ȭ�鿡 �������� �ʴ´�. 
	- �Է� ���۶�� �߰� ������ ���� ����ϴ� ������ ���� ���� �ʰ� ��µǴ� ����. 
  */ 
		
	}
	printf("getch \n");
	a=1,b=0;
	
	if(a==1 && b==0){
		char ch;
		
		ch = getche();
		printf("%c",ch);
		
		printf("\n");
	  // https://kcoder.tistory.com/entry/getchar-getch-getche%EC%9D%98-%EC%B0%A8%EC%9D%B4%EC%A0%90-%EC%98%88%EC%A0%9C%EC%86%8C%EC%8A%A4-%EA%B7%B8%EB%A6%BC
 	/*
  	3) getche() - #include<conio.h> 
  		- getch() �� ����������, ���������� �Է� ���� ȭ�鿡 ����ϴ� ���̰� �ִ�. 
  	*/ 
	}
	
	/*
	- getchar()�� ��� Enter���� �ν��ϴµ��� ���̰� ����. 
		1) getchar() : \n���� �ν�
		2) getch(),getche() : \r���� �ν� 
	*/
	printf("getche \n\n");
	return 0;
}

