#include <stdio.h>

int main(void)
{
  int i=10, j; // i ���ȵ��� 10 

  j = i + 10;  // j ���ȵ��� 10 + 10 
  i = i + j;   // i ���­� 10 �[�W j ���� 20 
               // �ܦ��F�s�� i �� 30 
  j = j + 1;
  printf("i ���Ȭ� %d\n",i);
  printf("j ���Ȭ� %d\n",j);

  return 0;
}
