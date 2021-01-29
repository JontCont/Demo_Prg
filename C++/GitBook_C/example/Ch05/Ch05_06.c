#include <stdio.h>

int main(void)
{
  // ���� 8 �줸�Ȧs��, �w�]�� 0xFF
  unsigned char PORTA = 0xFF;  
  printf("PORTA ��l�Ȭ� %02X\n\n", PORTA);
  
  PORTA &= 0xF3;    // �N bit 2,3 �M���� 0  
  printf("�N bit 2,3 �M���� 0 ��\n"); 
  printf("PORTA ���Ȭ� %02X\n\n", PORTA);
  
  PORTA &= 0x3F;    // �A�N bit 6,7 �M���� 0  
  printf("�~��N bit 6,7 �M���� 0 ��\n"); 
  printf("PORTA ���Ȭ� %02X\n", PORTA);
  
  return 0;
}
