#include <stdio.h>

int main(void)
{      // �ϥΤG���}�C�s��h�Ӧr��
  char str[4][20]= {"Sun is shinning",  
                    "Flower is pretty",
                    "Sugar is sweety",
                    "And so are you"};
  int i;
  for(i=0;i<4;i++)  // �ΰj��v����X�����r��
    printf("%s\n",str[i]);

  return 0;
}
