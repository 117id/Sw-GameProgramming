#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int i;
   srand(10);
   for(i=1;i<=10;i++)
	printf("%2d:%5d\n", i, rand());
   return 0;
   
   // i가 15까지나 10 까지나 rand값은 변하지 않고 srand(?) 값에 의존적이다. 
}
