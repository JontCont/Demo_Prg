#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char date[11];  // �x�s����L��J���~/��/�� 
  char mm[3]={0}; // �s��몺�r�� 
  char dd[3]={0}; // �s��骺�r��

  printf("�п�J��� (�Ҧp 2020/05/05): ");
  scanf("%10s",date);     // ���wŪ�J�Q�Ӧr�� 
  
  strncpy(mm, (const char*)date+5, 2); // �N����s�J mm �}�C�� 
  strncpy(dd, (const char*)date+8, 2); // �N����s�J dd �}�C�� 
  
  printf("���:���� %d �~ %d �� %d ��\n",
         atoi(date)-1911,   // �褸�����
         atoi(mm),          // �� 
         atoi(dd));         // �� 

  return 0;
}
