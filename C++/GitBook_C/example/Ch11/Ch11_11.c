#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *num;
  // sum �O�`�M, i �O�j���ܼ�, n ���ƭȭӼ� 
  int sum=0, i, n;

  printf("�аݭn�p��h�֭ӼƦr���`�M: ");
  scanf("%d",&n);

  num=(int*)malloc(sizeof(int)*n); // �t�m�O���� 
  
  for(i=0;i<n;i++)                 // �H�j���x�s�ƭ� 
  {
    printf("�п�J�� %d �Ӽƭ�: ",i+1);
    scanf("%d",(num+i));
  }
  
  for(i=0;i<n;i++)                 // �H�j��p���`�M 
  {
    sum += *(num+i);               // �p���`�M 
  }
  printf("�`�M���� %d\n",sum);
  free(num);  // ����t�m���O���� 

  return 0;
}
