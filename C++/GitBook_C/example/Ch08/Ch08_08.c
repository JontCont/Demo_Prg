#include <stdio.h>

int main()
{
  float c;
  float ctof(float);  // �N���ū���ئ��ūת��禡�ŧi�b�� 

  printf("�п�J���ū�: ");
  scanf("%f",&c);
  printf("���ū� %.1f �׵���ؤ� %.1f ��\n",c, ctof(c));

  return 0;
}

float ctof(float c)   // �ഫ�ūת��禡 
{ 
  return c * 9 / 5 + 32;
}
