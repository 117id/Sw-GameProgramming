#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
 int i;
 srand(time(NULL));
 for(i=1;i<=10;i++)
   printf("%2d:%d\n",i, rand()%6+1);
 return 0;
 
 // 랜덤으로 값을 입력받고 그 값이 1~6 사이의 값이 나오는 구조. 
} 
