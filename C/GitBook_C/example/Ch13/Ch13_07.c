#include <stdio.h>
#include <stdlib.h>         // �зǨ禡�t�A�� 
#include <conio.h>          

int main(void)
{ 
  int seed; // �üƺؤl
  int i=0;  //�j���ܼ�
   
  printf("�п�J�üƺؤl: ");
  seed=getche();
  srand(seed);                // �]�w�üƺؤl 
  for(i = 0; i < 10;i++ )
  {
    if(i%2==0)  printf("\n"); // �C��X 2 �ӴN���� 
    printf("%5d  ", rand());  // ���ͤο�X�ü� 
  }
   
  return 0;
}
