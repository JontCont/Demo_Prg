#include <stdio.h>
#include <string.h>

int main(void)
{
  char str1[32] = "foot";
  char str2[] = "ballet";
  int n;

  printf("�� 1 �Ӧr��: %s\n",str1);
  printf("�� 2 �Ӧr��: %s\n",str2);

  printf("�аݭn�N�� 2 �Ӧr�ꪺ�e�X�Ӧr���걵��� 1 �Ӧr���: ");
  scanf("%d",&n);
  strncat(str1,str2,n); // �걵���w���r���� 
  printf("�걵���G�G %s\n",str1);

  return 0;
}
