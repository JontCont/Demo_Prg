#include <stdio.h>

int main(void)
{
  // �x�s 4 �ӼƭȪ��ܼ� 
  int num1, num2, num3, num4;

  // �x�s����L�{��, ���j�ƭȪ��ܼ� 
  int bigger1, bigger2, biggest;

  printf("�п�J 4 �ӼƦr\n");
  scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

  // ����ƭ�1 �M�ƭ�2 �j�p, ���x�s���G 
  if (num1>num2) bigger1 = num1;
  else           bigger1 = num2;   
  
  // ����ƭ�3 �M�ƭ�4 �j�p, ���x�s���G 
  if (num3>num4) bigger2 = num3;
  else           bigger2 = num4;  

  // �N�e 2 ����������G�A���Ӥ�� 
  // �Y�i�ƭ�1,2,3,4 ���̤j�� 
  if (bigger1>bigger2) biggest = bigger1;
  else                 biggest = bigger2;

  printf("�̤j�Ƭ� %d ",biggest);
  return 0;
}
