#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int i;
   srand(10);
   for(i=1;i<=15;i++)
	printf("%2d:%5d\n", i, rand());
   return 0;
   
   // rand : 0���� RAND_MAX���� �������� ������ ������. 
   // ���� �ִ븦 �������� ������ �⺻ ������ : 0 ~ 32767 �̴�. 
   // srand : �ణ �õ� ����
   // seed ���� ���� rand�� ���� �ٲ�� �Ǵ� ����.
   // Ex) srand(2) : 2��°�� ��ϵ� ���� �Լ��� �迭 ����. 
      
   // https://reakwon.tistory.com/63
   // https://blockdmask.tistory.com/308
   // https://araikuma.tistory.com/598
}
