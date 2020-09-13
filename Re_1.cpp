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
  	- 입력을 하면 바로 들어가는 것이 아니라 입력 버퍼에 저장됨.
	- 엔터가 들어올 때 까지 입력을 계속 담아두다가 엔터가 들어오면 입력 중지후 */
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
  	- 버퍼 사용하지 않음.
	- getch()는 엔터 입력할 때 까지 기다리지 않는다
	- K를 입력한 후 손을 떼는 순간 바로 ch 값에 들어가고 printf()문에 의해서 출력된다.
	- 키보드에서 K를 눌렀지만 getch()는 입력 값을 화면에 보여주지 않는다. 
	- 입력 버퍼라는 중간 과정이 없어 대기하는 과정이 존재 하지 않고 출력되는 형식. 
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
  		- getch() 와 동일하지만, 차이점으로 입력 값을 화면에 출력하는 차이가 있다. 
  	*/ 
	}
	
	/*
	- getchar()의 경우 Enter값을 인식하는데에 차이가 존재. 
		1) getchar() : \n으로 인식
		2) getch(),getche() : \r으로 인식 
	*/
	printf("getche \n\n");
	return 0;
}

