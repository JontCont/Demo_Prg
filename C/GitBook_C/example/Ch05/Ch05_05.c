#include <stdio.h>

int main(void)
{
  int test;

  printf("�п�J�@�Ӿ��: ");
  scanf("%d", &test);
  
  printf("%d �� 2 ���� %d\n", test, test << 1);
  printf("%d �� 4 ���� %d\n", test, test << 2);
  printf("%d �� 8 ���� %d\n\n", test, test << 3);
  
  printf("%d ���H 2 ���� %d\n", test, test >> 1);
  printf("%d ���H 4 ���� %d\n", test, test >> 2);
  printf("%d ���H 8 ���� %d\n", test, test >> 3);

  return 0;
}
