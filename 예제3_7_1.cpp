#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int i;
   srand(10);
   for(i=1;i<=15;i++)
	printf("%2d:%5d\n", i, rand());
   return 0;
   
   // rand : 0부터 RAND_MAX까지 범위까지 난수를 생성함. 
   // 값의 최대를 설정하지 않으면 기본 설정값 : 0 ~ 32767 이다. 
   // srand : 약간 시드 느낌
   // seed 값에 따라 rand의 값이 바뀌게 되는 역할.
   // Ex) srand(2) : 2번째로 등록된 랜덤 함수의 배열 느낌. 
      
   // https://reakwon.tistory.com/63
   // https://blockdmask.tistory.com/308
   // https://araikuma.tistory.com/598
}
