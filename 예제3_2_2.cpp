#include <stdio.h>
#include <conio.h>
int main(void)
{
   int chr;
   do
   {
      chr=getch();
//  if (chr==0)
//	chr = 0xe0 �� �������� �ʾƵ� ������ ����� �ǳ�
// 	code = 224 ������ Ȯ��Ű
// http://blog.naver.com/PostView.nhn?blogId=sharonichoya&logNo=220875372940
      if (chr==0 || chr == 0xe0)
      {
          chr=getch();
          printf("Ȯ��Ű code=%d\n", chr);
       }
       else
          printf("�ƽ�Ű code=%d\n", chr);
      }while(1);
   return 0;
}
