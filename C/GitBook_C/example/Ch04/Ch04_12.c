#include <stdio.h>

int main(void)
{
  int a=20; // ��l�� 20 

  // �p�� ++a*10
  printf("++a *10 = %d\n", ++a*10);
  printf("a= %d\n\n",a);
  
  a=20; // ���s�]�w a ���Ȭ� 20 

  // �p�� a++*10
  printf("a++ *10 = %d\n", a++*10);
  printf("a= %d\n",a);

  return 0;
}
