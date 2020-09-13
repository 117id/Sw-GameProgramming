#include <stdio.h>
#include <conio.h>
int main(void)
{
   char chr;
   do
   {
	printf("해당 키를 누르시오>");
	chr=getch();
	printf("\n키: %c, ASCII(10):%d, (16):%x\n", chr, chr, chr);
   }while(chr!='0');
   // 키보드 값의  
   
   return 0;
   // 16진수(Hexadecimal) 
   // A : 41h
   // a : 61h
   // 0 : 30h
   //   https://shaeod.tistory.com/228
}
