#include <stdio.h>
float add(int,int); // �쫬�ŧi, �p�� 2 ���`�M���禡 

int main(void)
{
  int i=396, j=548;   // ���եΪ��ƭ� 
  
  // �H sum ���� add() �禡���Ǧ^�� 
  float sum = add(i,j); 
  printf("%d + %d = %.0f\n",i,j, sum);

  return 0;
}

float add(int x,int y)  // �w�q��X�`�M���禡 
{
  float total = (float)x + y;
  return total;        // ���`�M�Ǧ^ main() 
}
