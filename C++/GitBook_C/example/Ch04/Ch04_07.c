#include <stdio.h>

int main(void)
{
  float pi=3.14159; 
  float x =pi/3;     // pi �� 3 �����@ 
  
  //  pi ��ۤv�� 3 �����@�� 3 ��, �O�_���� 0  
  printf("%d\n",(pi - x - x - x)==0);
  
  //  pi �� 3*(�ۤv�� 3 �����@), �O�_���� 0 
  printf("%d",(pi - 3*x) ==0);
  
  return 0;
}
