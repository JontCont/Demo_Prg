#include <stdio.h>
#define BIT(X) 1<<X        // �w�q�줸���� 

int main(void)
{
  unsigned char reg8=0;    //  ���] reg8 �N��Y 8 �줸�Ȧs�� 
  unsigned short reg16=0;  //  ���] reg16 �N��Y 16 �줸�Ȧs��

  printf("�N reg8 �� bit3 �]�� 1:\n");
  reg8 |= BIT(3);
  printf("reg8: %02X\n\n", reg8);

  printf("�N reg16 �� bit10 �]�� 1:\n");
  reg16 |= BIT(10);
  printf("reg16: %04X\n", reg16);

  return 0;
}
