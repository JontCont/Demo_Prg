#include <stdio.h>
#include <conio.h>
#define SIZE 32  // �N�� 32 �줸���}�C 

int main(void)
{
  int i= SIZE-1;    // �j���ܼƻP�}�C������ 
  int number;      // �ϥΪ̿�J��, �έp�Ⱓ�k�ɪ��l�� 
  unsigned char binary[SIZE]={0}; // �x�s���k�p�⤤���l��,
                                  // �Y�G�i��Ʀr���� 1 ��Ʀr 
  printf("�п�J�Q�i��Ʀr: ");
  scanf("%d", &number);
  
  if(number<0) number = -number;  // �Y�O�t��, �N���ন���� 
  
  do    // ���s���k���j�� 
  {
    printf("%d ���H 2=> �� %d, �l�� %d\n",  // ��X�p��L�{ 
            number, number/2, number%2);
    binary[i--] = number%2;   // ���l��, �]�N�O�G�i�줤���Ʀr 
    number=number/2;          // ���Ӽ�, ���U�@��Q����     
  } while(number>0);          // �Q���Ƭ� 0 �Y�����j�� 
  
  printf("\n�G�i����: ");
  for(i=i+1; i<SIZE; i++)  // �j��q���k�B���B�z���������}�l 
       printf("%d", binary[i]);
    
  return 0;
}
