#include <stdio.h>

int main(void)
{
  // ��ܤG�i��Ʀr���Q�i��� 
  printf("�G�i��Ʀr 0b1001 = %d \n", 0b1001); 
  printf("�G�i��Ʀr 0b01101001 = %d \n", 0b01101001);

  // �ΤG�i��Ʀr���[�k�B�� 
  printf("�G�i��Ʀr 0b1001 + 0b01101001 = %d \n", 
             0b1001 + 0b01101001  );
  
  // �G�i��Ʀr�i�H�M�Q�i��Ʀr�@�_���B�� 
  printf("�G�i��Ʀr 0b1001 + �Q�i��Ʀr 12345 = %d \n", 
             0b1001 + 12345  );                
}
