#include <stdio.h>
#define RED 1    // ����O�O���N�X, ���O�� 1
#define GREEN 2  // ��O�� 2
#define YELLOW 3 // ���O�� 3

void Ch06_05()
{
  int color;           // ����O�C���J�� 

  printf("�п�J����O�O�� (��1, ��2, ��3): ");
  scanf("%d", &color);  // �q��L��J����O�C��N�X

  switch(color) 
  {
    case RED:  
        printf("���O, ��b��\n" );
        break ;
    case GREEN:
        printf("��O, �~��e�i\n" );
        break ;
    case YELLOW:    
        printf("���O, �[�t�q�L\n" ) ;
        break ;
    default:    // �O���G�١H
        printf("�L�k����, ��t�C��\n" ) ;
  }

  //return Ch06_05;
}
