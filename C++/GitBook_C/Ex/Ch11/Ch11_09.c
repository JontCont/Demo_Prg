#include <stdio.h>
void swap(int,int); // �N 2 ���ܼƭȹ�ժ��禡 

int main(void)
{
  int a=5,b=10;

  printf("�b main()��...\n");
  printf("�洫�e a=%d,b=%d\n",a,b); // ��X�洫�e���ܼƭȩM��}
  printf("�ܼ� a ����}�� %p\n",&a);
  printf("�ܼ� b ����}�� %p\n",&b);

  swap(a,b);  // �I�s�禡, �ñN a,b ���ܼƭȶǵ��禡 
  printf("�b main()��...\n");
  printf("�洫�� a=%d,b=%d\n",a,b);  // ��X�y�洫��z�� 
  printf("�ܼ� a ����}�� %p\n",&a); // ��}�H���ܼƭ� 
  printf("�ܼ� b ����}�� %p\n",&b);

  return 0;
}

void swap(int a,int b)
{
  int temp;  // �洫�ƭȹL�{��, �ΨӼȦs���ƭȪ��ܼƭ�

  temp=a;
  a=b;
  b=temp;
  printf("�b swap() �禡��...\n");
  printf("�洫�� a=%d,b=%d\n",a,b);  // ��X�禡�������ܼƪ���
  printf("�ܼ� a ����}�� %p\n",&a); // �M��}
  printf("�ܼ� b ����}�� %p\n",&b);
}
