#include <stdio.h>

int main(void)
{
  int *ptri,i;
  char *ptrc,c;

  ptri=&i;
  ptrc=&c;

  for(i=3;i>=1;i--)  // ���쾹��h 3~1 ���ƭ� 
  {
    printf("���쾹 ptri-%d = %p, ", i, ptri-i);
    printf("���쾹 ptrc-%d = %p\n", i, ptrc-i);
  }
    
  printf("���쾹 ptri   = %p, ���쾹 ptrc   = %p\n",ptri, ptrc);

  for(i=1;i<=3;i++)  // ���쾹�[�W 1~3 ���ƭ� 
  {
    printf("���쾹 ptri+%d = %p, ", i, ptri+i);
    printf("���쾹 ptrc+%d = %p\n", i, ptrc+i);
  }
 
  return 0;
}
