#include <stdio.h>
#define EARTH_MASS   5.97219e24 // �a�y��q 
#define EARTH_RADIUS 6371000.0  // �a�y�b�| 
#define G 6.672e-11             // �w�q�U���ޤO�`�� 

int main(void)
{
  printf("�a���O�[�t�� = %f\n",
          G * EARTH_MASS / (EARTH_RADIUS*EARTH_RADIUS) );
  
  return 0;
}
