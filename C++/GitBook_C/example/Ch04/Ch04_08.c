#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  bool x= false; // ���L���O 
  bool y= 99;    // ���w���ƭ� 
  
  printf("bool ���O�j�p�� %d �줸��\n", sizeof(_Bool));
  printf("x=%d, y=%d\n", x, y);
  printf("x && y => %d\n", x && y); // AND �B�� 
  printf("x || y => %d\n", x || y); // OR  �B�� 
  printf("  !x   => %d\n", !x);     // NOT �B��  
  printf("  !y   => %d\n", !y);
  
  return 0;
}
