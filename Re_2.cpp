#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char tmp;
		
	while((tmp=getchar()) != '\n')
	{
		putchar(tmp);
	}
		
	printf("\n�����\n");

	// while((tmp=getch()) != '\n') 
	// getch()���� ����ҋ� �Է°��� ������ ���͸� ������ '\r'�� ����Ǿ ������ �߻��Ѵ�. 
	// '\r'�� �ɸ��� �������� Ŀ���� ���� ���� ó�� ��ġ�� ������ ���̴�.
	//  ĳ���� ���� : ������ ������ ������ �� ���� �����ϴµ� ���̴� ���� ���ڳ� �� ������ ����Ų��. 
	while((tmp=getch()) != '\r')
	{
		putchar(tmp);
	}
		
	printf("\n�����\n");
}

