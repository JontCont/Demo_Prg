#include <stdio.h>
#include <string.h>
void Ch06_06()
{
  char color;           // ����O�C���J�� 

  printf("�п�J����O�O�� (��r, ��g, ��y): ");
  scanf("%s", &color);  // �q��L��J����O�C��N�X

  switch(color) 
  {
      case 'r':  // �p�g r ��
      case 'R':  // �j�g R ���|�����ۦP�q��
          printf("���O, ��b��\n" );
          break ;
      case 'g':  // �p�g g ��
      case 'G':  // �j�g G ���|�����ۦP�q��
          printf("��O, �~��e�i\n" );
          break ;
      case 'y':  // �p�g y ��
      case 'Y':  // �j�g Y ���|�����ۦP�q��
          printf("���O, �[�t�q�L\n" ) ;
          break ;
      default:    // �O���G�١H
          printf("�L�k����, ��t�C��\n" ) ;
  }

  //return Ch06_06;
}
