#include <stdio.h>

int main(void)
{
  int i;

  for(i=1;i<=10;i++)  // �� 1 �� 10 �] 10 �����j�� 
  {
    if (i==5)    // �j������� 5 ����,����⦡���� 
    {
      continue;  // ����� 5 ���j��, �~��� 6 �� 
    }
    printf(" %d ",i);
  }

  return 0;
}
