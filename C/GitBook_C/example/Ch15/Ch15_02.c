#include <stdio.h>

union  // �t��ƻP�B�I�ƪ��@�P�Ŷ�
{
  float distance;   // �x�s���{�� 
  int   passenger;  // �x�s���ȤH�� 
} trip[2];          // �ŧi�t 2 �Ӧ@�P�Ŷ����}�C

int main(void)
{
  trip[0].passenger=5;
  printf("�� 1 �����, �H�� %d �H\n", trip[0].passenger);
  
  trip[1].distance=15.5;
  printf("�� 2 �����, ���{ %.2f ����\n", trip[1].distance);

  return 0;
}
