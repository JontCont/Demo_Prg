#include <stdio.h>

int main(void)
{
  int fatherAge=38, childAge=10;
    
  printf("���G�� 1 ��ܯu; ���G�� 0 ��ܰ�\n");
  printf("���˦~�֤j��p�Ħ~�� %d\n",   fatherAge>childAge);
  printf("���˦~�֤p��p�Ħ~�� %d\n",   fatherAge<childAge);
  printf("���˦~�ֵ���p�Ħ~�� %d\n",   fatherAge==childAge);
  printf("���˦~�֤�����p�Ħ~�� %d\n", fatherAge!=childAge);
  printf("���˦~�֤j��ε���p�Ħ~�� %d\n", fatherAge>=childAge);
  printf("���˦~�֤p��ε���p�Ħ~�� %d\n", fatherAge<=childAge);
  
  return 0;
}
