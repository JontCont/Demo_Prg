#include <stdio.h>

int main(void)
{
  int pos=31 ;      // ����j�骺�ܼ� 
  int number,value; // �n�ഫ���ƭ�, �ΨC����X���줸�� 
  printf("�п�J��ƭ�: ");
  scanf("%d",&number);
  
  printf("�G�i����: ");
  do
  {
    value=(number>>pos) & 1;    // �N�ƭȥ������w��ƫ�, �A AND 1 
    putchar(value+48);          // ��X�ƭȥ[ 48 (�]�N�O�Ʀr�� ASCII �X) 
    if(pos%4==0) putchar(' ');  // �C��X 4 ��ƧY�Ť@�� 
	pos--;
  }  while(pos>=0);             // �����X, ���� bit 0 ����

  return 0;
}
