#include <stdio.h>
#define CUBE_AREA(x) x*x*6  // �w�q�ߤ�����n���������� 

int main(void)
{
  float edge;

  printf("�p��ߤ�����n, �п�J�ߤ������: ");
  scanf("%f", &edge);

  #ifdef CUBE_AREA             // �P�_ CUBE_AREA �O�_�w�Q�w�q 
    printf("�ߤ�����n�����w�w�q����, �p�⤤...\n");
  #else
    printf("�ߤ�����n�����|���w�q����, �w�q��...\n");
    #define CUBE_AREA(x) x*x*6   // �p�G���w�q, �h���s�w�q 
    printf("�w�q����, �p�⤤...\n");
  #endif
    printf("\n��� %f ���ߤ�����n�� %.2f\n", edge, 
                                                CUBE_AREA(edge)); 
  return 0;
}
