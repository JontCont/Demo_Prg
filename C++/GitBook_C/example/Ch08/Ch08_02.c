#include <stdio.h>
int max(int,int);  // ��� 2 �Ӽƪ��j�p, �öǦ^�̤j�Ȫ��禡 

int main(void)
{
  // �x�s 4 �ӼƭȪ��ܼ� 
  int num1, num2, num3, num4;

  printf("�п�J 4 �ӼƦr\n");
  scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

  printf("�̤j�Ƭ� %d ",
         // ����ƭ�1 �M�ƭ�2 �j�p, 
         // ����ƭ�3 �M�ƭ�4 �j�p, 
         // �A�� 2 ����������G����� 
         max( max(num1, num2), 
              max(num3, num4) ) );
         
  return 0;
}

// �w�q�����ӼƤj�p���禡 
int max(int x, int y)
{
  if (x>y)  return x;
  else      return y;
}
