#include <stdio.h>

int main(void)
{
  int i;   // int (4 Bytes) �ܼ�  
  short s; // short (2 Bytes) �ܼ� 
  char *ptr; // char (1 Byte) ���쾹 

  ptr=(char*) &i;   // �� char ���쾹���V i ����} 
  *ptr    = 0x56;  // �ӧO�]�w int ���C�Ӧ줸�ժ��� 
  *(ptr+1)= 0x34;
  *(ptr+2)= 0x12;
  *(ptr+3)= 0;
  printf("i= %08X\n", i);
  
  ptr=(char*) &s; // �� char ���쾹���V s ����} 
  *ptr   = 0x00;  // �ӧO�]�w short int ���C�Ӧ줸�ժ��� 
  *(ptr+1)= 0x77;
  printf("s= %04X", s);
  
  return 0;
}
