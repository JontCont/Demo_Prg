#include <stdio.h>
#include <conio.h>

int main(void)
{
  int i=0;      // �j����榸�� 
  char input;  // ��ܦr�� 
  
  do
  {
    i++;
    printf("\n�j��w�g���� %d ��\n",i);
    printf("�~���?(y/n)");
    input=getche();
  } while(input=='y'); // �j�骺����⦡ 
  
  printf("\n�j���`�@����F %d ��\n", i);

  return 0;
}
