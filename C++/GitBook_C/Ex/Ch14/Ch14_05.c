#include <stdio.h>

struct account
{
  int  id;       // �b��
  char name[10]; // �b��W�� 
  int  balance;  // �l�� 
};
     
void checkBalance(struct account);  // �ѼƸ�ƫ��O�����c�骺�禡  

int main(void)
{
  struct account customerA={1, "Mary Wang", 50000 };
  checkBalance(customerA);  // �H���c���ܼƬ��ѼƩI�s�禡

  return 0;
}

void checkBalance(struct account x)
{
  printf("�b��: %04d\n", x.id);
  printf("�b��W��: %s\n", x.name);
  printf("�l�B: %d ��", x.balance);
}
