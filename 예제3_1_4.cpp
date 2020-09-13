#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void)
{
 int i, j;
 for(j=1;j<=9;j++)
 {
  system("cls");
  for(i=1;i<=9;i++)
   printf("%d*%d=%d\n", j, i, j*i);
  printf("아무키나 누르시오.\n");
  getch(); // getchar-getch-getche 차이점. 
	// Re_1,Re_2 참조. 
  }
 return 0;
}
