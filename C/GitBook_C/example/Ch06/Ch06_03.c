#include <stdio.h>

int main(void)
{
  int score;

  printf("���Z����, �п�J���Z\n");
  scanf("%d",&score);

  if (score>=90)         // score �Ȥj�󵥩� 90 �O�_���u 
    printf("�ҵ�!!\n");  // ���u, ��X���G 

  // ����, �A�P�_ score �j�󵥩� 80 �O�_���u 
  else if (score>=80)
    printf("�A��!!\n");  // ���u, ��X���G 

  // ����, �A�P�_ score �j�󵥩� 70 �O�_���u 
  else if (score>=70)
    printf("����!!\n");  // ���u, ��X���G 

  // ����, �A�P�_ score �j�󵥩� 60 �O�_���u 
  else if (score>=60)
    printf("�B��!!\n");  // ���u, ��X���G 

  else
    printf("����!!\n");  // ����, ��X���G 

  return 0;
}
