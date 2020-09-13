#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
   int i;
   double rnd;
   srand(time(NULL));
   printf("%d\n",RAND_MAX);
   for(i=1;i<=5;i++)
   {
	rnd=rand()/(double)RAND_MAX;
	printf("%6.4f\n", rnd);
   }
   return 0;
   // 소수의 나눗셈은 정수라도 소수로 표현해주어야 값을 처리할수 있음. 
}
