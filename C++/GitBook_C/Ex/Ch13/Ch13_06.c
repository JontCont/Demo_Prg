#include <stdio.h>
#define BMI(weight,height) weight/(height*height)  // �w�q BMI ���������� 
#define THIN(BMI) BMI<20                           // �w�q BMI �Ȫ��P�_�� 
#define IDEAL(BMI) BMI>=19&&BMI<26
#define DANGEROUS(BMI) BMI>=26 && BMI<30

int main(void)
{
  float kg,cm;            // kg ���魫, cm ������
  float bmi;

  do
  {
    printf("===�p�� BMI===\n");
    printf("�п�J�魫 (kg):");      scanf("%f",&kg);
    printf("�п�J���� (cm):");     scanf("%f",&cm);
    
    if ( kg<20)    // �ư���J���~���魫�� 
      printf("�魫��J���~, �Э��s��J\n");
    if ( cm<100)   // �ư���J���~�������� 
      printf("������J���~, �Э��s��J\n");
  } while( kg<20 || cm<100); // ����s��J���j��  
                            
  cm=cm/100;                 // �N�����ഫ������ 
  bmi=BMI(kg,cm);            // �ϥέp�� BMI �Ȫ����� 
  printf("�z�������q���� BMI �O %5.2f\n",bmi);

  if(THIN(bmi))               // �P�_ BMI �� 
    printf("�魫����, �ЧV�O�Y�D�I\n");
  else if(IDEAL(bmi))
    printf("���ܼз�!!\n");
  else if(DANGEROUS(bmi))
    printf("���I�D, �Ӵ�ΤF!!\n");
  else
    printf("�L�D�F!!�L�D�F!!�Фp�ߨ���!!\n");

  return 0;
}
