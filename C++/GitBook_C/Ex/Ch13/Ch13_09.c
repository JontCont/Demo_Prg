#include <stdio.h>
#define length 35          // �w�q���ת��� 
#define width 20           // �w�q�e�ת��� 
#define area length*width  // �w�q���n���� 
#if length>width           // �P�_���׬O�_�j��e�� 
#define condition 'T'      // �w�q���p���u 
#else
#define condition 'F'      // �w�q���p���� 
#endif

int main(void)
{
  if (condition=='T')      // �P�_���p�O�_���u 
  {
    printf("�� = %d\n",length);
    printf("�e = %d\n",width);
    printf("�x�έ��n: %d*%d=%d\n",length,width,area);
  }
  else
    printf("���e�w�q���~, �Э��s�w�q\n");

  return 0;
}
