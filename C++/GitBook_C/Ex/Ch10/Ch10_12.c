#include <stdio.h>
#define SIZE 9
void output(int[][SIZE]); // ��X�}�C���e���禡 

int main(void)
{                         // ���X�@���}�C���ŧi�覡 
  int array[SIZE][SIZE];
  int i,j;
 
 // �ΰj��]�w�}�C���e 
  for (i=0;i<SIZE;i++)    // �~�j�鱱��G���}�C���C�� 
  {
    for (j=0;j<SIZE;j++)  // ���j�鱱��G���}�C����� 
      array[i][j]=(i+1)*(j+1);
  }

  output(array);          // �I�s�禡��X�}�C���e 

 return 0;
}

void output(int ary[][SIZE])  // �w�q��X�}�C���e���禡
{ 
  int i,j;

  for (i=0;i<SIZE;i++)
  {
    for(j=0;j<SIZE;j++)
      printf("%2d ",ary[i][j]);
    
    printf("\n");
  }
}
