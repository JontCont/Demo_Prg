#include <stdio.h>

struct account
{
  int  id;       // �b��
  char name[10]; // �b��W�� 
  int  balance;  // �l�� 
};
     
void checkBalance(struct account);   // �ѼƸ�ƫ��O�����c�骺�禡  
void withdraw(struct account*, int); // ���ڨ禡, 
                                     // �ѼƸ�ƫ��O�����c����쾹
int main(void)
{
  struct account customerA={1, "Mary Wang", 50000 };
  withdraw(&customerA, 30000);  // �H���c���ܼƦ�}���ѼƩI�s�禡
  
  withdraw(&customerA, 25000);  // �H���c���ܼƦ�}���ѼƩI�s�禡

  return 0;
}

void checkBalance(struct account x)
{
  printf("�b��: %04d\n", x.id);
  printf("�b��W��: %s\n", x.name);
  printf("�l�B: %d ��\n", x.balance);
}

void withdraw(struct account* x, int amount)
{ 
  if(amount <= x->balance)
  {
    x->balance -= amount;
    printf("*** ���� %d ��, �X�r��...\n", amount);
  }
  else
    printf("*** ���ڥ���, �l�B����\n");
  
  checkBalance(*x);
}
