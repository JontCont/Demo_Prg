#include <stdio.h>
double area1(double);       // �p��ꭱ�n�禡���@ 
double area2(double);       // �p��ꭱ�n�禡���G
double pi = 3.1415926;

int main(void)
{
  double r=0;
  printf("��J�ꪺ�b�|, ��J�����Ы� Enter: \n");
  scanf("%lf", &r);

  printf("�ꭱ�n��: %f �� %f", area1(r), area2(r));

  return 0;
}

double area1(double r)       // �p��ꭱ�n�禡���@ 
{
  return pi*r*r;
}

double area2(double r)      // �p��ꭱ�n�禡���G
{
  double pi = 3.14;         // �P�~���ܼƦP�W�������ܼ� 
  return pi*r*r;
}
