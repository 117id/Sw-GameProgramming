#include <stdio.h>
void draw_square(int size);
int main(void)
{
    int n;
    printf("정사각형그리기\n\n");
    printf("정사각형의길이(최대)를\n");
    printf("입력하고Enter>");
    scanf("%d", &n);
    draw_square(n);
    return 0;
}
void draw_square(int size)
{
    int i, j;
    unsigned char a=0xa6, b[7];
    for(i=1;i<7;i++)
        b[i]=0xa0+i;
    printf("%c%c", a, b[3]);
    
    for(i=0;i<size;i++)
        printf("%c%c", a, b[1]);
    printf("%c%c", a, b[4]);
    printf("\n");

    for(i=0;i<size;i++)
    {
        printf("%c%c", a, b[2]);
        for(j=0;j<size;j++)
            printf(" ");
        printf("%c%c", a, b[2]);
        printf("\n");
    }
    printf("%c%c", a, b[6]);

    for(i=0;i<size;i++)
        printf("%c%c", a, b[1]);
    printf("%c%c", a, b[5]);
    printf("\n");

	// https://njgame.tistory.com/entry/%EC%82%AC%EA%B0%81%ED%98%95-%EA%B7%B8%EB%A6%AC%EA%B8%B0-1
	// https://m.blog.naver.com/PostView.nhn?blogId=bestheroz&logNo=118048431&proxyReferer=https:%2F%2Fwww.google.com%2F
	// https://m.blog.naver.com/skssim/111983268
}

