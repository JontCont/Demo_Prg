#include <stdio.h>
#define SIZE 5  // �}�C�j�p 

int main(void)
{
  int number[SIZE], max=0, i;
  int *ptr= &number[0];  // ���쾹���V�� 0 �Ӥ��� 
  
  
  printf("�п�J 5 �Ӿ�ƭ�: ");
  for(i=0;i<SIZE;i++)
  {
    scanf("%d", ptr+i);  // �Ϋ��쾹�[�k, �N��J�Ȧs��U����
    if(*(ptr+i)>max)     // �Ϋ��쾹�[�k, ���o�U������ 
      max=*(ptr+i);      // ��X�̤j�� 
  }
  
  for(i=0;i<SIZE;i++)
  {
    printf("%d ",*(ptr+i)); // �Ϋ��쾹�[�k, ���o�U������
  }
  printf("�̤j�Ȭ� %d\n",max);

  return 0;
}
