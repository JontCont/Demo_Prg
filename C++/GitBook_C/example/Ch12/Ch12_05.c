#include <stdio.h>

int main(void)
{
  char name[16];  // �ŧi�@�r�����O���}�C 
  
  // �N�r�ꤺ�e�̧Ƕ�J�}�C�� 
  name[0]='R'; name[1]='o'; name[2]='b';
  name[3]='e'; name[4]='r'; name[5]='t';
  name[6]='\0';

  printf("name: %s\n",name);

  return 0;
}
