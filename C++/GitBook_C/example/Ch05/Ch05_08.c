#include <stdio.h>

int main(void)
{
  // ���� 8 �줸�Ȧs��, �w�]�� 0xF0 
  unsigned char PORTA = 0xF0;  
  printf("PORTA ��l�Ȭ� %02X\n\n", PORTA);
  
  PORTA ^= 0x07;    // ���� bit 2,1,0 
  printf("���� bit 2,1,0 ��\n"); 
  printf("PORTA ���Ȭ� %02X\n\n", PORTA);
  
  PORTA ^= 0xE0;    // ���� bit 7,6,5
  printf("���� bit 7,6,5 ��\n"); 
  printf("PORTA ���Ȭ� %02X\n", PORTA);
  
  return 0;
}
