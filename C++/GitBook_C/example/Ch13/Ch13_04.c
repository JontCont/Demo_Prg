#include <stdio.h>
#define CtoF(C) C*9/5+32        // �w�q�����ئ������� 
#define FtoC(F) (F-32)*5/9  // �w�q�ئ�����󪺥��� 

int main(void)
{
  int option;               // �\�����ܼ� 
  float temp;               // �ū� 

  printf("�ū׫׶q���ഫ, �п��(1)�����ئ�(2)�ئ������: ");
  scanf("%d", &option);
  printf("�п�J�ū�: ");
  scanf("%f", &temp);

  if (option==1)           // ��� CtoF ���p�� 
    printf("%5.2f �� C ���� %5.2f �� F\n", temp, CtoF(temp));
  else if (option==2)      // ��� FtoC ���p�� 
    printf("%5.2f �� F ���� %5.2f �� C\n",temp, FtoC(temp));
  
  return 0;
}
