#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  int i=0, len;
  float value=0;    // �Ψ��x�s�������ū׭� 
  char buf[64]={0}; // �x�s�r�ꪺ�}�C 

  srand((unsigned)time(NULL));  // ���o�t�ήɶ�
                                // �]�w�üƺؤl 
  for(i=0; i<5; i++)
  {
    value = rand()%100 + 200;   // �ζüƲ��� 200-299 ����   
    value /=10.0;               // �N�üƭȰ��H 10 �����ū׿�J
    len=sprintf(buf, "�ثe�ū�:%.1f",value);
    
    printf("�T������:%d �T�����e:%s\n", len, buf);
  }
  return 0;
}
