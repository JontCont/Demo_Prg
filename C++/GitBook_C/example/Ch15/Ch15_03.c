#include <stdio.h>
#include <stdlib.h>
#include <time.h>

union                      // ��ܤT�b�[�t�׭� 
{                          // ���@�P�Ŷ� 
  float value[3];
  struct {
      float x;
      float y;
      float z;
  } axis;
} gSensor;

void randomValue(void)     // �����H���[�t�׭Ȫ��禡,
{                          //     �ΨӼ������骺���� 
  static unsigned int seed=0;
  int i=0;
  if(seed==0)           // �Y�üƺؤl�� 0  
  {
    seed = time(NULL);  // ���o�üƺؤl 
    srand(seed);        // �]�w�üƺؤl 
  }
  
  for(i=0;i<3;i++)     // �ΰj�鲣�� 3 �Ӷü�, �]�w���}�C���� 
    gSensor.value[i] = (float) rand() / RAND_MAX * 19.6 - 9.8; 
}

void delay(void)    // �ۭq������禡 
{
  int i,j;
  for(i=0;i<10000;i++)
    for(j=0;j<10000;j++) ;
}

int main(void)
{     
  randomValue(); //�����H����, ������J 
  // �ѵ��c����o XYZ �T�b�[�t�׭�   
  printf("�� 1 ������...\n");
  printf("X�b�[�t��: %f\n", gSensor.axis.x);
  printf("Y�b�[�t��: %f\n", gSensor.axis.y);
  printf("Z�b�[�t��: %f\n\n", gSensor.axis.z);
  delay();
  printf("�� 2 ������...\n");
  randomValue(); //�����H����, ������J 
  // �ѵ��c����o XYZ �T�b�[�t�׭�   
  printf("X�b�[�t��: %f\n", gSensor.axis.x);
  printf("Y�b�[�t��: %f\n", gSensor.axis.y);
  printf("Z�b�[�t��: %f\n", gSensor.axis.z);
  return 0;
}
