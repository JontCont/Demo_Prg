#include <stdio.h>

void Ch06_04()
{
  char male;       // �O�_���k��
  float waist;     // �y��

  printf("�аݧA�O�k�Ͷ�? (y/n) ");
  scanf("%s",&male);
  
  printf("�аݸy��? ");
  scanf("%f",&waist);
  
  printf("\n");
  if (male=='y')       // �P�_�O�_���k�� 
  {
    if (waist>=90)     // �P�_�y��O�_�W�L 90 
                       // �P�_���G���u 
      printf("�Ъ`�N�y��, �n�h�B�ʩM���Ŷ���!!\n");       
    else               // �P�_���G����  
      printf("�ܦn, ���~��O������!!\n");     
  }
  else if (male=='n')                 // �k��
  {
    if (waist>=80)     // �P�_�y��O�_�W�L 80 
                       // �P�_���G���u 
      printf("�Ъ`�N�y��, �n�h�B�ʩM���Ŷ���!!\n");       
    else               // �P�_���G����  
      printf("�ܦn, ���~��O������!!\n");     
  }
  else 
  	printf("data warring");

  //return Ch06_04;
}
