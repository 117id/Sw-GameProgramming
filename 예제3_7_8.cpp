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
   // �Ҽ��� �������� ������ �Ҽ��� ǥ�����־�� ���� ó���Ҽ� ����. 
}
