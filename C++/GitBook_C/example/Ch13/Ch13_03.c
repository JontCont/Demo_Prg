#include <stdio.h>
#define ENERGY mass * lightspeed * lightspeed

int main(void)
{
  float mass = 1;
  float lightspeed = 299792458;
  
  printf("%.1f ���窫��, �ഫ����q�� %.1f �J��\n", mass, ENERGY);
  printf("\t�� %.3E �J��\n", ENERGY);
  return 0;
}
