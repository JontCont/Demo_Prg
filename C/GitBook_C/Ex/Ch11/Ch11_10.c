#include <stdio.h>
void swap(int*,int*);  // �ѼƬ����쾹 

int main(void)
{
  int a=5,b=10;

  printf("�b main()��...\n");
  printf("�洫�e a=%d,b=%d\n",a,b); // ��X�洫�e���ܼƭȩM��}
  printf("�ܼ� a ����}�� %p\n",&a);
  printf("�ܼ� b ����}�� %p\n",&b);

  swap(&a,&b); // �I�s�禡, �n�� & ���o�ܼ� a,b ����}
               // ��ܶǵ��禡���O�ܼƦ�}�ӫD�ܼƭ�
  printf("�b main()��...\n");
  printf("�洫�� a=%d,b=%d\n",a,b);  // ��X�洫�᪺ 
  printf("�ܼ� a ����}�� %p\n",&a); // ��}�H���ܼƭ� 
  printf("�ܼ� b ����}�� %p\n",&b);

  return 0;
}

void swap(int *a,int *b)  // �ѼƬO���쾹 
{
  int temp;  // �洫�ƭȹL�{��, �ΨӼȦs���ƭȪ��ܼƭ�

  temp=*a;
  *a=*b;
  *b=temp;
  printf("�b swap() �禡��...\n");
  printf("�洫�� *a=%d,*b=%d\n",*a,*b);      // ��X�b�禡���洫�� 
  printf("���쾹 a �ҫ�����}�� %p\n",a);  // ���ܼƦ�}�H�M�� 
  printf("���쾹 b �ҫ�����}�� %p\n",b);
}
