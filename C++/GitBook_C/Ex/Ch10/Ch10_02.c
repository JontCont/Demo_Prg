#include <stdio.h>
#include <stdlib.h>
#include <time.h> // �ϥ� time() �禡�ݧt�A���� 
#define SIZE 6    // ��l�I�ƪ��ƶq (1~6 �I�@ 6 ��) 

int main(void)
{
  int dice[SIZE]={0}; // ��l�}�C���Ҧ��������ȳ��� 0 
  int i, play, point;

  srand((unsigned)time(NULL));      // ���o�t�ήɶ�
                                    // �åΨt�ήɶ��ӳ]�w�üƺؤl 
  printf("�п�J��l���Y����: ");
  scanf("%d", &play);

  for(i=0;i<play;i++)
  {
    point=rand()%6+1;    // ���� 1~6 �����ü� 
    dice[point-1]++;     // �}�C�����ȥ[ 1 
  }

  for(i=0;i<SIZE;i++)
    printf("�I�� %d �X�{ %d ��\n",i+1,dice[i]);

  return 0;
}
