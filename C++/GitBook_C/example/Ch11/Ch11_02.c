#include <stdio.h>

int main(void)
{
  int    *intptr;    // �ŧi��ƫ��O�����쾹 
  char   *charptr;   // �ŧi�r�����O�����쾹 
  float  *floatptr;  // �ŧi�B�I�ƫ��O�����쾹 
  double *doubleptr; // �ŧi����ƫ��O�����쾹 

  printf("�U�ث��O���쾹���e�q�j�p\n");
  printf("intptr    = %d bytes\n",sizeof(intptr));
  printf("charptr   = %d bytes\n",sizeof(charptr));
  printf("floatptr  = %d bytes\n",sizeof(floatptr));
  printf("doubleptr = %d bytes\n",sizeof(doubleptr));

  return 0;
}
