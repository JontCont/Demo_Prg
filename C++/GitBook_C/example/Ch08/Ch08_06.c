#include <stdio.h>
float stdWeight(int,int) ; // �魫�p��禡 

int main(void)
{
  int i,height;  // i �O�ʧO�ﶵ�ܼ�, height �O���� 
  float weight;  // �p�⵲�G���魫�� 

  do  // �@�w�n��� 1 �� 2, �_�h�@���n�D��ܨk�Τk 
  {
    printf("�ʧO: (1)�k (2)�k\n");
    scanf("%d", &i);  // ��ܭp��k�ͩΤk�ͪ��魫 
  } while (i!=1 && i!=2);
  printf("�п�J����\n");
  scanf("%d",&height);
  
  // weight ���� stdweight() �Ǧ^���з��魫�� 
  weight = stdWeight(i,height);
  printf("�z���з��魫�O %.1f ����\n", weight);

  return 0;
}

float stdWeight(int s,int h)  // �з��魫�p��禡 
{
  float result;

  if (s == 1)
    result = (h - 80)*0.7;
  else
    result = (h - 70)*0.6;

  return result;
}
