#include <stdio.h>
#define ROW 9
#define COL 9

int main(void)
{                       // ���X�@���}�C���ŧi�覡 
  int a[ROW][COL];
  int i,j;

  for (i=0;i<ROW;i++)   // �~�j�鱱��G���}�C���C��   
    for (j=0;j<COL;j++) // ���j�鱱��G���}�C����� 
      a[i][j]=(i+1)*(j+1);  // �]�w������ 
  
  for (i=0;i<ROW;i++)   // ����G���}�C���C�� 
  {
    for(j=0;j<COL;j++)  // ����G���}�C����� 
    { 
      printf("%2d ",a[i][j]); // ��X������
    }
    printf("\n");       // ��X�@�C�N���� 
  }

  return 0;
}
