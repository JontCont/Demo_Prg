#include <stdio.h>
#include <conio.h>

int main(void)
{
  printf("�п�J�@�Ӧr��\n");
       // ���ܼƨӱ� getche() ����L��J���r���� 
  char ch = getche();
  printf("\n��J���r���� %c\n", ch);
  
  printf("�ЦA��J�@�Ӧr��\n");
  ch = getch();  // ��� getch() 
  printf("\n��J���r���� %c\n", ch);

  return 0;
}
