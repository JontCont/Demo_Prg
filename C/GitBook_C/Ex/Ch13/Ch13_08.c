#include <stdio.h>
#include "Ch13_08.h" // �t�A Ch13_08.h �� 

int main(void)
{
  int option,price;  // option �O�ﶵ, price �O���� 

  printf("�п�ܩж�����:\n");
  printf("(1)�`�ήM�� (2)���خM�� (3)���ŮM�� (4)�зǮM��: ");
  scanf("%d",&option);

  printf("�z��ܪ��O:\n");
  switch (option)
  {
    case 1:
          printf("�`�ήM��\n");
          price = PRESIDENT;   // �ϥΧt�A�ɩw�q���`�� 
          break;
    case 2:
          printf("���خM��\n");
          price=LUX_CLASS;     // �ϥΧt�A�ɩw�q���`�� 
          break;
    case 3:
          printf("���ŮM��\n");
          price=DLX_CLASS;     // �ϥΧt�A�ɩw�q���`��    
          break;
    case 4:
          printf("�зǮM��\n");
          price=STD_CLASS;     // �ϥΧt�A�ɩw�q���`��
          break;
    default:
          printf("����O��\n");
          price=0;
  }
  printf("�C�ߩw��: %d ��\n",price);

  return 0;
}
