#include <stdio.h>

int main(void)
{
  char x = 127;
  x = x + 1;  // 127+1, char �̤j�ȥ[ 1 
  printf("x = %d\n",x);
  
  unsigned char y = 0;
  y = y - 1;  // 0-1, unsigned char �̤p�ȴ� 1
  printf("y = %d\n",y);
  
  float z = 3.4e38;
  z = z * 10;  // 3.4e38*10, float �̤j�ȭ� 10 
  printf("z = %f\n",z);

  return 0;
}
