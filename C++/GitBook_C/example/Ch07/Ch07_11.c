#include <stdio.h>

int main(void)
{
  int i,j,k;                // 3 �Ӱj�骺�ܼ� 

  for (i=0;i<100;i++)       // �̥~�Ĥ@�h�j��, �� 0 �� 99 �]�@�ʦ� 
  {
    for (j=0;j<100;j++)     // �����ĤG�h�j��, �� 0 �� 99 �]�@�ʦ� 
    {
      for (k=0;k<100;k++)   // �̤��ĤT�h�j��, �� 0 �� 99 �]�@�ʦ� 
      {
        printf("i= %d,j= %d,k= %d\n",i,j,k);
        goto endloop;       // �{���y�{�������ҦW endloop �B 
      }
    }
  }
    
  endloop:  // goto �ԭz�|���{���y�{�������즹�B�~����� 
    printf("�j��Q�j�����F\n");

  return 0;
}
