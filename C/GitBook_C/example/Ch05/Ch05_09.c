#include <stdio.h>
#define SWITCH1 0x01       // �Y���s 1 �s�����}������� bit 0
#define SWITCH2 0x02       // �Y���s 2 �s�����}������� bit 1

int main(void)
{
  // ���]�Ȧs��Ū�쪺�Ȭ� 0xF6
  unsigned char PORTA = 0xF6;  
  printf("PORTA ��J�Ȭ� %02X\n\n", PORTA);
  
  printf("���s 1 �Q���U? %d\n", (PORTA & SWITCH1) == SWITCH1);
  printf("���s 2 �Q���U? %d\n", (PORTA & SWITCH2) == SWITCH2);
  printf("���s 1, 2 �P�ɳQ���U? %d\n", 
                 (PORTA & (SWITCH2|SWITCH1) == (SWITCH2|SWITCH1)));
  
  return 0;
}
