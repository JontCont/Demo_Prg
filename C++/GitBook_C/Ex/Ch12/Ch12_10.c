#include <stdio.h>
#include <string.h>

int main(void)
{
  char str1[60];  // �ŧi�x�s�r��1 ���}�C 
  char str2[60];  // �ŧi�x�s�r��2 ���}�C 
  int i,length;   // i ���j���ܼ�, length ���r����� 

  printf("�п�J�� 1 �Ӧr��: ");
  gets(str1);
  printf("�п�J�� 2 �Ӧr��: ");
  gets(str2);

  if(strcmp(str1,str2)==0)         // ����� str1 �P str2 �O�_���P 
    printf("��r��ۦP!\n",i);
  else
  {   
    if(strlen(str1)>strlen(str2)) // �N length �]�w�� 
      length=strlen(str1);        // �����r�ꪺ���� 
    else
      length=strlen(str2);
	                          
    for(i=1;i<=length;i++)        // �v�r����� str1 �P str2  
      if(strncmp(str1,str2,i)!= 0)  // ���줣�P�Y���X�j�� 
        break;
    printf("��r��q�� %d �Ӧr�}�l���P!\n",i);
  }
  
  return 0;
}
