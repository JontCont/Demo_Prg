#include <stdio.h>

void Ch06_03()
{
  int score;

  printf("���Z����, �п�J���Z\n");
  scanf("%d",&score);

  if (score>=90)        
    printf("�ҵ�!!\n"); 

  else if (score>=80)
    printf("�A��!!\n"); 

  else if (score>=70)
    printf("����!!\n"); 

  else if (score>=60)
    printf("�B��!!\n"); 

  else
    printf("����!!\n"); 

 // return Ch06_03;
}
