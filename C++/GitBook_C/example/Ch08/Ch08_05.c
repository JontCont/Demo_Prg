#include <stdio.h>
void printResult(float) ; // �쫬�ŧi��X���G���禡 

int main(void)
{
  int i,height; // i �O�ʧO�ﶵ�ܼ�, height �O���� 
  float weight; // �p��X�Ӫ��з��魫 

  do  // �@�w�n��� 1 �� 2, �_�h����n�D��ܨk�Τk 
  {
    printf("�ʧO:(1)�k (2)�k\n");
    scanf("%d",&i);  
  } while (i!=1 && i!=2);

  printf("�п�J����\n");
  scanf("%d",&height);
  if (i == 1)
    weight = (height-80) * 0.7;  // �p��k�ͪ��魫 
  else
    weight = (height-70) * 0.6;  // �p��k�ͪ��魫 

  // �I�s�禡�N�p�⵲�G��X 
  printResult(weight);

  return 0;
}

void printResult(float result)  // �w�q��X���G���禡 
{
  printf("�z���з��魫�O %.1f ����\n", result);
}
