#include <stdio.h>

int main(void)
{
  float score[]={69,   87, 97, 54, 79.5,
                 60, 69.5, 75, 85, 76 };
  int i;

  for(i=0;i<10;i++)
    printf("�y�� %2d ��妨�Z %5.1f ��\n", i+1, score[i]);

  return 0;
}
