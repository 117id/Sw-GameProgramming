#include <stdio.h>
void draw_square(int size);
int main(void)
{
    int n;
    printf("정사각형 그리기\n\n");
    printf("정사각형의 길이(최대 37)를\n");
    printf("입력하고 Enter>");
    scanf("%d", &n);
    draw_square(n);
    return 0;
}
void draw_square(int size)
{
	// https://m.blog.naver.com/skssim/111983268
	// 콘솔화면에 사각형과 바둑판 그리기
	
	// 0) - ( 0xa1 ) | ( 0xa2 )
	// 1) 0xa3 0xa4 0xa5 0xa6
	// 2) 0xa6 , 0xa(-)
	// 결과 출력시에 위치 설정을 적절하게 하는 방법은 확인 불가.. 
    int i, j;
    unsigned char a=0xa6;
    unsigned char b[7];
    for(i=1;i<7;i++)
    	b[i]=0xa0+i;
    printf("%c%c",a, b[3]);
    // 0xa1~6 값 입력.
	 
    for(i=0;i<size;i++)
		printf("%c%c", a, b[1]);
    printf("%c%c", a, b[4]);
    printf("\n");
    for(i=0;i<size;i++)
    {
 	printf("%c%c", a, b[2]);
	for(j=0;j<size;j++)
		printf("  ");
	printf("%c%c",a, b[2]);
	printf("\n");
    }
    printf("%c%c", a, b[6]);
    for(i=0;i<size;i++)
	printf("%c%c", a, b[1]);
    printf("%c%c", a, b[5]);
    printf("\n");
}
