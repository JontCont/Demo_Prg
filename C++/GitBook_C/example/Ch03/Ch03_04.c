#include <stdio.h>

int main(void)
{
  int n1=1, n2=2;
  char nx='x', nz='z';

  printf("�� %d ����...\n",n1);  // �q�ù���X n1 ���� 
  printf("�� %d ����...\n",n2);
  printf("�� %c ����...\n",nx);
  printf("�� %d%c ����...\n",n1,nx); // �q�ù���X n1, nx ���� 
  printf("�� %d%c ����...\n",n2,nx); 
  printf("�� %c%c%c ����...\n",nx,nx,nx);
  printf("�εۤF...%c%c%c\n",nz,nz,nz);

  return 0;
}
