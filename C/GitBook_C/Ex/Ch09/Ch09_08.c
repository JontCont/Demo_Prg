#include <stdio.h>
#include <conio.h>

void withdraw(void);
int money;      // �ŧi���ڪ��B money ���~���ܼ� 

int main(void)
{
  char option; // �j��P�_�r�� 

  do{
      printf("�п�J���ڪ��B:\n");
      scanf("%d",&money);
      withdraw();
      printf("�٭n�A�����?(y/n)\n");
      option=getch();
    } while(option=='y');

  return 0;
}

void withdraw(void)          // �B�z���ڪ��B���禡 
{
  static int balance= 10000; // ���l�������R�A�ܼ� 
  
  if (balance-money>=0)      // �P�_�b��l�B�O�_���� 
  { 
    balance -= money;        // �p�ⴣ�ګ᪺���l 
    printf("�z���b�᤺�٦� %d ��\n",balance);
  }
  else
    printf("�l�B����, �z���b��u�� %d ��\n",balance);
}
