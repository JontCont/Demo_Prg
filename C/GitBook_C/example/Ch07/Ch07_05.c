#include <stdio.h>

int main(void)
{
  int i,sum=0; // i �O�j���ܼ�, sum �O�Ψӭp���`�M 
        // �� 1 �� 100 �C���[ 2, �� 1,3,5...���j�� 
  for (i=1;i<100;i+=2)
  {
    sum=sum+i; // �֥[�p���`�X 
  }
  
  printf("1~100���_�ƩM���� %d\n",sum);

  return 0;
}
