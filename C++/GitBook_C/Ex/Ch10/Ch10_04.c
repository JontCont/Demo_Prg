#include <stdio.h>
#define SIZE 5  // �w�q�`�� SIZE �� 5

int main(void)
{
  int age[SIZE]; // �ŧi�x�s�~�ָ�ƪ��}�C 
  int i,sum=0;   // i ���j���ܼ�, sum ���`�M 
  float avg;     // avg ���~�֪����� 

  printf("�}�l��J���u���~��:\n");
  for(i=0;i<SIZE;i++)    // �����J���j�� 
  {
    printf("��J�� %d ���~�ָ��: ", i+1);
    scanf("%d",&age[i]); // ����L��J�~�ָ�� 
    sum+=age[i];         // �p��~���`�M, �y��Ψӭp�⥭���~��
  }
  
  avg=(float)sum/SIZE;   // �p�⥭���~��
  printf("���u�������~�֬� %.2f\n",avg);

  return 0;
}
