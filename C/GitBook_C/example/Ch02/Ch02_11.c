#include <stdio.h>

int main(void)
{
  const char i=5;
  i=10;      // ���w�s�ȵ� const �ܼ� 
  printf("%c",i);

  return 0;
}
