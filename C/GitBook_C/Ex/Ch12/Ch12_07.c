#include <stdio.h>
#include <string.h>   // �O�o�n�t�A���� 

int main(void)
{
  char str1[]="Money is power"; // �w�q�r�� 
  char *str2=str1;

  printf("�r��str1����      %d bytes\n", strlen(str1));
  printf("�r��str1���O����  %d bytes\n", sizeof(str1));
  printf("�r��str2����      %d bytes\n", strlen(str2));
  printf("�r��str2���O����  %d bytes\n", sizeof(str2));

  return 0;
}
