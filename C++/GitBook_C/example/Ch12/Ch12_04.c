#include <stdio.h>

int main(void)
{
  char *ptr="Embedded System";  // �]�w�r���l�� 
  int i=0;  // �j���ܼ� 
  
  printf("ptr �r�ꪺ���e�� %s\n",ptr);
  
  for(i=0;i<16;i++)  // �Ϋ��쾹��X�r�ꤤ�U�r������}�P��
    printf("*(ptr+%02d) (%p) : %c (%#3d) \n",
                 i,  (ptr+i), *(ptr+i), *(ptr+i));

  return 0;
}
