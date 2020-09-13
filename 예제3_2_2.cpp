#include <stdio.h>
#include <conio.h>
int main(void)
{
   int chr;
   do
   {
      chr=getch();
//  if (chr==0)
//	chr = 0xe0 을 선언하지 않아도 내용은 출력은 되나
// 	code = 224 내용은 확장키
// http://blog.naver.com/PostView.nhn?blogId=sharonichoya&logNo=220875372940
      if (chr==0 || chr == 0xe0)
      {
          chr=getch();
          printf("확장키 code=%d\n", chr);
       }
       else
          printf("아스키 code=%d\n", chr);
      }while(1);
   return 0;
}
