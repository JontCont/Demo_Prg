#include <stdio.h>
float plus(void);           // �[�k�禡 
float minus(void);          // ��k�禡 
float multiply(void);       // ���k�禡 
float division(void);       // ���k�禡 

int main(void)
{
  char  operation;          // �w�q��Ū��ܼ�
  extern float num1,num2;   // �ϥΥ~���ܼ�   
    
  printf("��J�⦡, ��J�����Ы� Enter: \n");
  scanf("%f%c%f", &num1, &operation, &num2);

  if (operation=='+')       // �[�k��� 
    printf("= %f\n",plus());
  else if (operation=='-')  // ��k��� 
    printf("= %f\n",minus());
  else if (operation=='*')  // ���k��� 
    printf("= %f\n",multiply());
  else if (operation=='/')  // ���k��� 
    printf("= %f\n",division());
  else
    printf("��ſ�J���~\n");

  return 0;
}

float num1,num2;            // �N���B�⪺���ܼƩw�q���~���ܼ� 

// �Ǧ^���ܼƩM���禡 
float plus(void)    { return num1+num2; }

// �Ǧ^���ܼƮt���禡 
float minus(void)   { return num1-num2; }

// �Ǧ^���ܼƿn���禡 
float multiply(void) { return num1*num2;}

// �Ǧ^���ܼưӪ��禡 
float division(void) { return num1/num2;}
