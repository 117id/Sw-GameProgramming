#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
 int i;
 srand(time(NULL));
 for(i=1;i<=6;i++)
   printf("%2d:%d\n",i,rand()%45+1);
 return 0;
 
 // 내용중에 i가 의도적으로 제외된 내용인지 아닌지 구분을 하지 못했음.
 // 그래서 그 내용만 수정함. 
} 
