#include <stdio.h>
#define SIZE 11  // �}�C�j�p 

int main(void)
{
  char msg[SIZE]={'H','e','l','l','o',' ','W','o','r','l','d'};
  char *ptr= msg;  // ���쾹���V�}�C 
  int i=0;
  
  for(i=0;i<SIZE;i++)
  {
    putchar(*ptr);
    ptr+=1;        // �N���쾹���ȥ[ 1 
  }
  printf("\n");
  
  for(i=0;i<SIZE;i++)  // ���j��N�}�C�ܼƷ���쾹�ާ@ 
  {
    if(*(msg+i)>=97 && *(msg+i)<=122 )  // �Y�O�p�g�r�� 
      *(msg+i) = (*(msg+i)-32);         // �N�ন�j�g (ASCII �ȴ� 32) 
    putchar(*(msg+i)); // �Ϋ��쾹�[�k, ���o�U������
  }

  return 0;
}
