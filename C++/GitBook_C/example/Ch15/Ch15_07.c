#include <stdio.h>

enum {Sun, Mon, Tue, Wed, Thu, Fri, Sat} daysOfWeek;

int main(void)
{
  char *eName[]={"Sunday",  // �@�P�C�Ѫ��^��W�� 
                 "Monday","Tuesday","Wednesday",
                 "Thursday","Friday","Saturday",
                };  
  char *cName[]={"�P����",  // �@�P�C�Ѫ�����W�� 
                 "�P���@","�P���G","�P���T",
                 "�P���|","�P����","�P����",
                };

  printf(" ����    �^��\n");
  // ��X�@�P���C�Ѫ����^��W�� 
  for(daysOfWeek=Sun; daysOfWeek<=Sat; daysOfWeek++)
       printf("%6s  %s\n",cName[daysOfWeek],
                          eName[daysOfWeek]);
  
  return 0;
}
