#include <stdio.h>
double area(float r)      //�p��ꫬ���n 
{                         // �b main()���e�w�q���禡 
  return r*r*3.14159;     // �ݨ�ŧi���\�� 
}

int main(void)
{
  float r;   // �b�| 

  printf("�п�J�b�|: ");
  scanf("%f",&r);
                          // �N r �ǤJ�禡 area() 
  printf("�ꫬ���n = %f \n", area(r));
  return 0;
}
