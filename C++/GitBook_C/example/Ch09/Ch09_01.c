#include <stdio.h>

void addsum(void);

int main(void)
{
  int i;

  for (i=0;i<3;i++)     // ���� 3 �� addsum() 
    addsum();

  return 0;
}

void addsum(void)
{
  int number=100;       // �����ܼ�, ����l�� 

  printf("number=%d\n",number++);  // �N�Ʀr�[ 1
}
