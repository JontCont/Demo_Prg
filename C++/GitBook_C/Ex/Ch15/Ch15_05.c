#include<stdio.h>
typedef struct  // �w�q���c�骺�s��ƫ��O 
{
  char name[10];
  char addr[10];
  int  age;
} PERSON;

int main(void)
{
  PERSON student={"��","�x�W",20};
  printf("%s���ͦb %d ���ɷh��%s�~��\n",
        student.name, student.age, student.addr);

  return 0;
}
