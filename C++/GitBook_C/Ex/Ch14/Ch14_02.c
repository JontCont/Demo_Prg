#include <stdio.h>

struct grade    // �ŧi���c�� grade 
{
  int sid;      // �ǥ;Ǹ� 
  int chinese;  // ��妨�Z 
  int math;     // �ƾǦ��Z 
  int english;  // �^�妨�Z 
} ss1={109001,78,98,54},
  ss2={109002,65,78,44};  // �]�w���c���ܼƪ���l�� 
               
int main(void)
{
  printf("  �Ǹ�  ���  �ƾ�  �^��\n");
  
  // ��X�� 1 �ӵ��c���ܼƪ��ƭȤ��e 
  printf("%6d   %#3d   %#3d   %#3d\n",
       ss1.sid,ss1.chinese,ss1.math,ss1.english);
  // ��X�� 2 �ӵ��c���ܼƪ��ƭȤ��e 
  printf("%6d   %#3d   %#3d   %#3d\n",
       ss2.sid,ss2.chinese,ss2.math,ss2.english);
       
  return 0;
}
