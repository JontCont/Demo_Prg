#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char h[32]={0}, w[32]={0}; // �����魫�r�� 
  double height,weight;  // �����魫�� 

  printf("===�p�⨭���q����===\n");
  printf("�п�J���� (����): ");
  scanf("%s",h);
  printf("�п�J�魫 (����): ");
  scanf("%s",w);
  
  height=atof(h)/100; // �ন���� 
  weight=atof(w);
  printf("�����q���Ƭ� %.2lf", weight/(height*height) );
   
  return 0;
}
