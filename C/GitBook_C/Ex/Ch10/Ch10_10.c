#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 4

int main(void)
{
  int A[ROW][COL]={18,44,21,25,
                   21,19,65,41,
                   78,21,33,54};
  int B[ROW][COL]={65,32,45,74,
                   11,24,10,41,
                   12,45,18,11};
  int C[ROW][COL];
  int i,j;      // ����j�骺�ܼ� 

  for(i=0;i<ROW;i++)
  {
    for(j=0;j<COL;j++) // ��X�}�C A  �����e 
      printf("%3d",A[i][j]);
    
    if(i==1)   // �b A, B ��}�C����X�ťթΥ[��
      printf("  +  ");
    else
      printf("     ");
    
    for(j=0;j<COL;j++) // ��X�}�C B  �����e 
      printf("%3d",B[i][j]);
    
    if(i==1)   // �b B, C ��}�C����X�ťթε���
      printf("  =  ");
    else
      printf("     ");
    
    for(j=0;j<COL;j++) // �i��[�k�p�⪺�j��  
    {
      C[i][j]=A[i][j]+B[i][j];
      printf("%3d",C[i][j]);
    }
    
    printf("\n");
  }

  return 0;
}
