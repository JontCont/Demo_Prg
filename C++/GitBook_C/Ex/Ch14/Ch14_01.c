#include <stdio.h>

struct grade    // �ŧi���c�� grade 
{
  int sid;      // �ǥ;Ǹ� 
  int chinese;  // ��妨�Z 
  int math;     // �ƾǦ��Z 
  int english;  // �^�妨�Z 
};

int main(void)
{
  struct grade ss;        // �ŧi���c���ܼ� ss 
  printf("�п�J�Ǹ�: ");
  scanf("%d",&ss.sid);    // ��J���c���ܼƪ��ƭ� 
  printf("�п�J��妨�Z: ");
  scanf("%d",&ss.chinese);
  printf("�п�J�ƾǦ��Z: ");
  scanf("%d",&ss.math);
  printf("�п�J�^�妨�Z: ");
  scanf("%d",&ss.english);

  printf("  �Ǹ�  ���  �ƾ�  �^��\n");
  printf("%6d   %#3d   %#3d   %#3d\n",
       ss.sid,ss.chinese,ss.math,ss.english);

  return 0;
}
