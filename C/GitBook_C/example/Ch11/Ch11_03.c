#include <stdio.h>

int main(void)
{
  int   *iptr, age=19;        // �ŧi��ƫ��O���쾹�P�ܼ� 
  float *fptr, weight=64.5;   // �ŧi�B�I�ƫ��O���쾹�P�ܼ� 
  char  *cptr, bloodtype='A'; // �ŧi�r�����O���쾹�P�ܼ� 

  iptr=&age;                  // iptr ���V age ����} 
  fptr=&weight;               // fptr ���V weight ����} 
  cptr=&bloodtype;            // cptr ���V bloodtype ����} 
  
  printf("�~��: %d ��\n",*iptr);
  printf("�魫: %.1f ����\n",*fptr);
  printf("�嫬: %c ��\n",*cptr);

  return 0;
}
