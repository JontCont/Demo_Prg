#include <stdio.h>

int main(void)
{
   char string[60];    // �ŧi�@�r���}�C�Ψ��x�s�r�� 

   printf("�п�J�@�q�r��: ");
   gets(string);       // ���� gets() ���o��J
   printf("�z��J���r�ꬰ: %s\n\n",string); // ��X�r�� 
   
   printf("�п�J�t�@�Ӧr��: ");
   scanf("%s",string); // ��� scanf() ���o��J
   printf("�z��J���r�ꬰ: %s\n",string); // ��X�r�� 

   return 0;
}
