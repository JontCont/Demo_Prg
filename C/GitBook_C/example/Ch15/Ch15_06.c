#include <stdio.h>

enum ANIMAL {tiger,horse,bird,dog};  // �ŧi�C�|���O 

int main(void)
{
  enum ANIMAL mypet=dog;
  
  if(mypet==dog) printf("�ھi�F�@���p��");
  else           printf("�ڨS���i�p��");
  
  return 0;
}
