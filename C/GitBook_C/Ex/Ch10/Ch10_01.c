#include <stdio.h>

int main(void)
{
  int number[5]={2,4,12,6,18}; // �ŧi�}�C�ó]�w��l�� 
  int i;                       // �j���ܼ� 

  printf("�}�C���j�p�� %d bytes\n",sizeof(number));

  for(i=0;i<5;i++)
    printf("number[%d] ���Ȭ�: %d\n",i,number[i]);

  return 0;
}
