#include <stdio.h>

int main(void)
{
  // i�Bj ���j���ܼ�, n �O�h��������, sum �O�`�M 
  int i,j,n,sum=0;

  printf("�p��h���� (1+2)+(2+4)+(3+6)...+(n+2*n) ����\n");
  printf("�п�J n ��\n");
  scanf("%d",&n);

  // ��պ⦡���j�� 
  for(i=1,j=2;i<=n,j<=2*n;i++,j=j+2)
  {
    sum=sum+(i+j);    // �p���`�M 
        // �N�h�����C�@���q�ù���X 
    printf("(%d+%d)+",i,j);
  }
  printf("\b = %d\n",sum);

  return 0;
}
