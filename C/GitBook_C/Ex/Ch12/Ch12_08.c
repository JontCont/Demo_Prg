#include <stdio.h>
#include <string.h>

int main(void)
{
  char source[]="twinkle twinkle little star";
  char target1[64]="this is a test"; 
  char target2[10]={0};        
  int len;  // �Ψ��x�s�}�C�e�q���ܼ� 
  
  len=(sizeof(target1)-1);   // �p�� target1 �}�C�e�q 
  if(strlen(source) <= len)  // �Y�e�q�j�󵥩�ӷ��r����� 
    strcpy(target1, source); // �����ƻs 
  else                        
    strncpy(target1, source, len);  // �u�ƻs�}�C�j�p�� 1 �Ӧr�� 
  printf("target1 �r��:%s\n", target1);
  
  len=(sizeof(target2)-1);   // �p�� target2 �}�C�e�q 
  if(strlen(source) <= len)  // �Y�e�q�j�󵥩�ӷ��r����� 
    strcpy(target2, source); // �����ƻs  
  else
    strncpy(target2, source, len);  // �u�ƻs�}�C�j�p�� 1 �Ӧr�� 
  printf("target2 �r��:%s\n", target2);   

  return 0;
}
