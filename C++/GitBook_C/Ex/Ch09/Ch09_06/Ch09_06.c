#include <stdio.h>
#include "Ch09_05.h"   // �t�A�禡���ŧi�� 

float num1,num2;       // �N���B�⪺���ܼƫŧi���~���ܼ� 
char operation;        // �ŧi��Ū��ܼƦ��~���ܼ� 

int main(void)
{
  printf("��J�⦡, ��J�����Ы� Enter:\n");
  scanf("%f%c%f",&num1,&operation,&num2);

  if (operation=='+')       // �[�k��� 
    printf("= %f\n",plus());
  else if (operation=='-')  // ��k��� 
    printf("= %f\n",minus());
  else if (operation=='*')  // ���k��� 
    printf("= %f\n",multiply());
  else if (operation=='/')  // ���k��� 
    printf("= %f\n",division());
  else
    printf("��ſ�J���~\n");

  return 0;
}
