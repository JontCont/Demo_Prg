#include <stdio.h>
#include <string.h>

int main(void)
{
   char str1[60];   // �w�q�r�� 
   char str2[60];

   printf("�п�J�� 1 �Ӧr��: ");
   gets(str1);
   printf("�п�J�� 2 �Ӧr��: ");
   gets(str2);

   if(strcmp(str1,str2)== 0) // ��� str1�Bstr2 
     printf("��r�ꪺ���e�۵�\n");
   else
     printf("��r�ꤺ�e���ۦP\n");

   return 0;
}
