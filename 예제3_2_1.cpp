#include <stdio.h>
#include <conio.h>
int main(void)
{
   char chr;
   do
   {
	printf("�ش� Ű�� �����ÿ�>");
	chr=getch();
	printf("\nŰ: %c, ASCII(10):%d, (16):%x\n", chr, chr, chr);
   }while(chr!='0');
   // Ű���� ����  
   
   return 0;
   // 16����(Hexadecimal) 
   // A : 41h
   // a : 61h
   // 0 : 30h
   //   https://shaeod.tistory.com/228
}
