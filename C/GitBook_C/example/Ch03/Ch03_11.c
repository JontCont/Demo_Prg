#include <stdio.h>

int main(void)
{
  int height=3952;

  printf("�ɤs���� %08ld ����\n",height);
  printf("�ɤs���� %-0+8ld ����\n",height);
  printf("�ɤs���� %08+ld ����\n",height);
  printf("\a");
  return 0;
}
