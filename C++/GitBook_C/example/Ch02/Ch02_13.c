#include <stdio.h>

int main(void)
{
  int iNum1 = 7;  // �ŧi����ܼƨõ�����l�� 7 
  int iNum2 = 3;  // �ŧi����ܼƨõ�����l�� 3 
  float answer;     // �ŧi����ܼƥΨӱ����B�⵲�G�� 

  answer = iNum1 / iNum2;  // ��X��Ӿ�Ƭ۰����� 
  printf("���૬�O�e���ӭ� = %f\n",answer);
  
  // ��X�B�I��(�૬�᪺���)�P��Ƭ۰����� 
  answer = (float) iNum1 / iNum2;
  printf("�૬�O�᪺�ӭ�   = %f\n",answer);

  return 0;
}
