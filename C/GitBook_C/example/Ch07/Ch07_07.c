#include <stdio.h>

int main(void)
{
  float sum,i;  // sum �O�`�M, i �O�j���ܼ� 
                // ��Ӫ�l�⦡���j�� 
  for (sum=0, i=0.1; i<1.1; sum+=i,i+=0.1)
  {
    printf(" %.1f +",i);
  }
  printf("\b = %.1f\n",sum);

  return 0;
}
