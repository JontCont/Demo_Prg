#include <stdio.h>
#include <string.h>

int main(void)
{
  char str1[32] = "BIRTH";
  char str2[] = "DAY";

  printf("�� 1 �Ӧr��: %s\n", str1);
  printf("�� 2 �Ӧr��: %s\n", str2);
  printf("�N�� 2 �Ӧr��걵�b�� 1 �Ӧr��᭱�����G\n%s\n",
         strcat(str1,str2));  // �걵 str1 �P str2 

  return 0;
}
