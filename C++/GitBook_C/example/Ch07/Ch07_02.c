#include <stdio.h>

int main(void)
{
  int num1,num2;  // �n�D�̤j���]�ƪ���Ӽ� 
  int a,b,c;      // �̦������ơB�Q���ơB�l�� 

  printf("�п�J��ӼƦr: ");

  scanf("%d %d", &num1, &num2);
  b=num1;         // �N��J���ƭ�1 ���Q���� 
  c=num2;         // �N��J���ƭ�2 ���l�� 

  while(c!=0)     // �p������۰����j�� 
  {
    a=b;          // ���w�e�@�����Ƭ��s���Q���� 
    b=c;          // ���w�e�@���l�Ƭ��s������ 
    c=a%b;        // �D�X�s���l�� 
  }

  printf("%d �P %d ���̤j���]�ƬO %d\n",num1,num2,b);

  return 0;
}
