#include <stdio.h>

int main(void)
{
  typedef char * STRING1;  // �w�q�s���O
  typedef char STRING2[60];
  
  STRING1 theory1="�m�i, �O�@�إ��u��g���{�H...";
  STRING2 theory2="�ū׭p, �O�Q�μ����N�Y����z...";
  printf("%s\n",theory1);
  printf("%s\n",theory2);

  return 0;
}
