#include <stdio.h>

int main(void)
{
  float degreeC, degreeF;

  printf("�п�J�ؤ󪺷ū�: ");
  scanf("%f", &degreeF);
  degreeC = (degreeF - 32) * 5 / 9;  // �ū��ഫ�������⦡ 
  printf("���ū׬� %.2f\n", degreeC);

  return 0;
}
