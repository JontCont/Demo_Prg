#include <stdio.h>
#define SIZE 5  // ���ҥu�B�z 5 ���ƭ� 

int main(void)
{
  int number[SIZE];  // �x�s�ƭȪ��}�C 
  int max=0, i;      // max �O�̤j��, i �O�j���ܼ� 

  printf("�п�J 5 �Ӿ��, �ڷ|��X�̤j��\n");
  for (i=0;i<SIZE;i++) // �ΰj��ӱ���}�C 
  {
    printf("�п�J�� %d �ӼƦr: ", i+1);
    scanf("%d",&number[i]);  // �N��J�Ȩ̧Ǧs��}�C  
  }
  
  for (i=0;i<SIZE;i++)  // ���}�C�Ȫ��j�� 
     // �p�G�}�C�Ȥj�� max �h�H�}�C�Ȩ��N max �ܼƭ� 
    if(number[i]>max) max=number[i];

  // ���C�X�����Ʀr�A��X�̤j�� 
  printf("\n");
  for (i=0; i<SIZE; i++)
    printf("%d, ",number[i]);

  printf("�����̤j�Ȭ� %d\n",max);

  return 0;
}
