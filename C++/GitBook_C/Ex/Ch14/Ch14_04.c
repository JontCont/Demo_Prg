#include <stdio.h>

struct employee
{
  int  id;           // ���u�s�� 
  char name[12];     // ���u�m�W 
} emp={1, "���j��"}; // �ŧi���c���ܼ�, �ë��w��l�� 

int main(void)
{
  struct employee *ptr; // �⵲�c���ܼƫŧi�����쾹 
  ptr=&emp;  
  
  // �Ϊ����s����� . ���o�������ƭ� 
  printf("���u�s��: %05d\n",(*ptr).id);
             
  // �ζ����s����� -> ���o�������ƭ�
  printf("���u�m�W: %s\n", ptr->name);

  return 0;
}
