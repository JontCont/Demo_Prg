#include <stdio.h>

int main(void)
{
  int a=33, b=66;

  a += b;  // �]�N�O a = a + b 
  printf("a = %d\n",a);
  
  a *= b;  // �]�N�O a = a * b 
  printf("a = %d\n",a);

  return 0;
}
