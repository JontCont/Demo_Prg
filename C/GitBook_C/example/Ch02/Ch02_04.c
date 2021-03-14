#include <stdio.h>

int main(void)
{
  printf("short int ������: %d\n",sizeof(short int));
  printf("long int ������: %d\n",sizeof(long int));
  printf("long long ������: %d\n",sizeof(long long));
  
  printf("unsigned short int ������: %d\n",
          sizeof(unsigned short int));
  printf("unsigned long int ������: %d\n",
          sizeof(unsigned long int));
  printf("unsigned long long ������: %d\n",
          sizeof(unsigned long long));        
  
  printf("long double ������: %d\n",
          sizeof(long double));

  return 0;
}
