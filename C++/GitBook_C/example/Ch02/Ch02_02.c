#include <stdio.h>

int main(void)
{
  // ��ܤQ���i��Ʀr���Q�i��� 
  printf("�G�i��Ʀr 0x09AB = %d \n", 0x09AB); 
  printf("�G�i��Ʀr 0xabcd = %d \n\n", 0xabcd);

  // �� %x �N 99+101 �p�⵲�G (200) �H�Q���i��榡��X
  printf("�Q�i��Ʀr 99 + 101 = %x \n",  99 + 101);
  
  // �� %#x ��ܦb��X���Ʀr�e�[�W 0x �r�� 
  printf("�Q�i��Ʀr 99 + 101 = %#x \n\n",  99 + 101);
  
  // �]�i�H�Τj�g %X 
  printf("�Q�i��Ʀr 2400 + 75 = %X \n",  2400 + 75); 
  printf("�Q�i��Ʀr 2400 + 75 = %#X \n",  2400 + 75); 
}
