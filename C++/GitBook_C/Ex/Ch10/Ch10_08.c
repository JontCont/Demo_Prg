#include <stdio.h>
#define ROW 5
#define COL 4

int main(void)
{
  int a[ROW][COL]={54,65,87,95,  // ������m���ŧi�覡 
                   41,18,24,98,
                   45,33,35,70,
                   23,11,79,64,
                   97,67,40,37};
  int i,j;

  for (i=0;i<ROW;i++)   // �~�j�鱱��G���}�C���� 1 �Ӻ���
  {
    for (j=0;j<COL;j++) // ���j�鱱��G���}�C���� 2 �Ӻ���
    { 
      printf("a[%d][%d]=%d  ",i,j,a[i][j]);
    }
    printf("\n");
  }

  return 0;
}
