#include <stdio.h>
int main(void)
{
  int start, end, sum=0;

  printf("�p��֥[�`�M, �п�J�_�l�ȻP������(�ݬҬ����)\n");
  scanf("%d %d", &start, &end);
  printf("�q %d �֥[�� %d ���`�M�� ", start, end);
  
  while(start<=end)  // �j�骺����⦡ 
  {
    sum=sum+start;   // �C�����N start ���ȥ[�� sum 
    start++;         // �N start ���ȥ[ 1 
  }
  printf("%d\n", sum);

  return 0;
}
