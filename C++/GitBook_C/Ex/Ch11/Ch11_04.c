#include <stdio.h>

int main(void)
{
  int litre;            // �ŧi�@�Ӿ�ƫ��O���ܼ� 
  float price = 25.5, total;
  void  *vIptr, *vFptr; // �ŧi void ���O�����쾹 

  vFptr= &price;        // �N�ܼƦ�}���w�� void ���O���쾹
  vIptr= &litre;

  // �H�j���૬���o���쾹�ҫ����ܼ� 
  printf("�T�o�C���� %.1f ��\n",*(float*)vFptr);
  printf("�[�X����? ");
  scanf("%d", (int*) vIptr);
  total=(*(int*)vIptr) * (*(float*)vFptr);
  printf("�p�p %.1f ��\n",total);
  
  return 0;
}
