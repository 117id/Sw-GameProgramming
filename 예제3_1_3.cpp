#include <stdio.h>
#include <stdlib.h>
// ���ڿ� ��ȯ, �ǻ� ���� ����, ���� �޸� ���� ���� �Լ�����. 
int main(void)
// void �� ������ ��� ����. 
{
  char ch;
  printf("���ڸ� �Է��ϰ� Enter>");
  scanf("%c", &ch);
  system("cls");
  // cmd - cls : ȭ�� ����� ��ɾ� 
  
  // ���μ��� ���� �Լ�
  // System �Լ��� �μ��� ���۽�ų ���μ����� �̸��� �޾� �� ���μ��� ȣ���ϴ� ����
  // ���μ����� ����� ������ ��ٷ��ִ� ����
  // System �Լ��� ���� ����� �����մϴ�.
   
  system("dir");
  // cmd - dir : ����� ���� �� ���ϵ� ���� 
  // http://forum.falinux.com/zbxe/index.php?document_srl=868968&mid=lecture_tip
  // http://blog.daum.net/naturelove87/204
  system("type ����3_1_3.cpp");
  printf("�Էµ� ���� %c\n", ch);
  return 0;
}


