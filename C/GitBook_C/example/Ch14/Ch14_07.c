#include <stdio.h>
struct 
{
  int      nibble1 :4; // �� 4 �줸���������
  unsigned nibble2 :4; // �� 4 �줸���L�����
} aByte={7,0};

int main(void)
{
  printf("aByte ���c��줸��쪺���e:\n");
  printf("nibble1:%d\tnibble2:%d\n\n",aByte.nibble1, aByte.nibble2);
  
  aByte.nibble1++;  // �ק�줸���� 
  aByte.nibble2--;

  printf("aByte ���c��줸��쪺���e:\n");
  printf("nibble1:%d\tnibble2:%d\n",aByte.nibble1, aByte.nibble2);

  return 0;
}
