#include <stdio.h>
int find_max(int[], int);

int main(void)
{
  int number1[] = {49,62,199,23,57};
  int number2[] = {15,86,72,65,46,44,66,33};
  
  // �I�s�ñN�}�C�ȶǨ�P�_�̤j�Ȫ��禡 
  printf("number1[] �̤j�Ȭ� %d\n",find_max(number1, 5));
  printf("number2[] �̤j�Ȭ� %d\n",find_max(number2, 8));

  return 0;
}

int find_max(int number[], int size) // �P�_�̤j�Ȫ��禡 
{
  int max=0,i;
    
  for (i=0;i<size;i++)  // �v�@����C�Ӥ����� 
    if(number[i]>max) max=number[i];

  return max;
}
