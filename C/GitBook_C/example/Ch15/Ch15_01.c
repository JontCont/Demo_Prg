#include <stdio.h>

union data  // �ŧi�@�P�Ŷ� data 
{
  int  a;
  char b;
} mydata;   // �@�P�Ŷ��ܼ� mydata 

int main(void)
{
  mydata.a=0x1200;   // ���w�Q���i��� 
  printf("mydata.a = %04x\n",mydata.a);
  mydata.b='3';      // ���w�r�� 
  printf("mydata.b = %c\n",mydata.b);
  printf("mydata.a = %04x\n",mydata.a);

  return 0;
}
