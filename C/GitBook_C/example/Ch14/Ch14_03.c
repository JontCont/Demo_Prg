#include <stdio.h>

struct person
{
  char name[7];  // �ǥͩm�W 
  char addr[7];  // ���y
  int  age;      // �~�� 
} student[4]={"���p��","�x�_��",18,  // �]�w��l�� 
              "���p��","�s�˥�",17,
              "�L�p��","���ƿ�",19,
              "���p��","�x����",17};

int main(void)
{
  int i;         // �j���ܼ� 

  printf("�m�W\t\t���y\t\t�~��\n");
  for(i=0;i<4;i++)
    printf("%s\t\t%s\t\t%d\n",student[i].name,
          student[i].addr,student[i].age);

  return 0;
}
