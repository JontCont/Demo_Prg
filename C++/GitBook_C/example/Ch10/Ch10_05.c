#include <stdio.h>

int main(void)
{
  // �Φr���}�C�x�s�Q���i��Ʀr�����r��   
  char hex[]={'0','1','2','3','4','5','6','7',
              '8','9','A','B','C','D','E','F'};
  int pos=28 ;      // ����j�骺�ܼ� 
  int number,value; // �n�ഫ���ƭ�, �ΨC����X���줸�� 
  printf("�п�J��ƭ�: ");
  scanf("%d",&number);
  
  printf("�Q���i����: ");
  for(pos=28;pos>=0;pos-=4)      // �C���j��� 4 �� bit ����   
  {
    value=(number>>pos) & 0xF;   // �N�ƭȥ������w��ƫ�, �A AND 0xF
    putchar(hex[value]);         // �μƭȷ����, ���o�������r��
    if(pos%16==0) putchar(' ');  // �C��X 4 ��ƧY�Ť@�� 
  } 

  return 0;
}
