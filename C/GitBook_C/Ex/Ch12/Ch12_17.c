#include <stdio.h>
#include <string.h>
#define LEN 30        // �̦h�i��J����� 
#define WIDTH 60      // �C�椤�̦h�i��J���r�� 

int main(void)
{
  char strs[LEN][WIDTH];  // �x�s�Ҧ���J�r�ꪺ�}�C 
  int i;       // �j���ܼ�
  int last=0;  // ��J�r��̫�@�������ޭ� 

  printf("�Ш̧ǿ�J�r��, ");
  printf("��r��J�����Ы��U Enter, ������J�����п�J quit\n");
  do
  {
    gets(strs[last]);      // �q��L��J�r�� 
    if (strcmp(strs[last],"quit")==0) // �P�_�r��O�_�� quit
      break;                          // �O�N���X�j�� 
    last++;
  } while(last<LEN);       // �P�_�O�_�����J���j��⦡ 
  
  printf("\n�r��զX���G:");
  for(i=0;i<last;i++)     // ��X�r��}�C�����e 
  {
    if(i%2==0)            // ��X�ⵧ�~���� 
      printf("\n");       // �۷������Ӧr��s�b�@�_  
    printf("%s",strs[i]);
  }
  
  return 0;
}
