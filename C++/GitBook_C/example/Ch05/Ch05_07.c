#include <stdio.h>

int main(void)
{
  // ���� 8 �줸�Ȧs��, �w�]�� 0x00 
  unsigned char PORTA = 0x00;  
  printf("PORTA ��l�Ȭ� %02X\n\n", PORTA);
  
  PORTA |= 0x0C;    // �N bit2,3 �]�� 1  
  printf("�N bit 2,3 �]�� 1 ��\n"); 
  printf("PORTA ���Ȭ� %02X\n\n", PORTA);
  
  PORTA |= 0xC0;    // �A�N bit6,7 �]�� 1  
  printf("�~��N bit 6,7 �]�� 1 ��\n"); 
  printf("PORTA ���Ȭ� %02X\n", PORTA);
  
  return 0;
}
