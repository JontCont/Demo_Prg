#include <stdio.h>

int main(void)
{
  int i, j;             // �j���ܼ� 

  for (i=1;i<10;i++)    // ����Q���ƪ��j�� 
  {
    for (j=1;j<10;j++)  // ����ƪ��j�� 
    {
        printf(" %d*%d=%2d",i,j,i*j);
    }
    printf("\n");
  }

  return 0;
}
