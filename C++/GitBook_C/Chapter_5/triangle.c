/*
�� 1 �D  �T���ο�O 
���D�y�z 
	�T���ΰ��F�O�̰򥻪��h��Υ~�A��i�i�@�B�Ӥ����w���T���ΡB�����T���ΤξU�� �T���ΡC�Y���w�T�ӽu�q�����סA�z�L�U�C�������B��A�Y�i�o�����T�u�q��_�c�� �T���ΡA��i�P�_�O�����B�U�ͩM�w���T���ΡC 
 
(���ܡG�Y a�Bb�Bc ���T�ӽu�q������A�B c ���̤j�ȡA�h     
	�Y a + b  ��  c�A�T�u�q�L�k�c���T����  
	�Y a �� a + b �� b  <  c �� c�A�T�u�q�c���w���T���� (Obtuse triangle)  
	�Y a �� a + b �� b  =  c �� c�A�T�u�q�c�������T���� (Right triangle)  
	�Y a �� a + b �� b  >  c �� c�A�T�u�q�c���U���T���� (Acute triangle) 
)
 
�г]�p�{���HŪ�J�T�ӽu�q�����קP�_�ÿ�X���T�u�q�i�_�c���T���ΡH
�Y�i�A�P�_ �ÿ�X����ݤT���������C 

��J�榡 
	��J�Ȥ@��]�t�T����ơA�T����ƬҤp�� 30,001�A��Ƥ������@�ťաC 
 
��X�榡 
	��X�@�����A�Ĥ@��Ѥp�Ӥj�L�X���T����ơA
	��Ʀr�����H�@�Ӫťն���A�̫� �@�ӼƦr�ᤣ�����ťաF
	�ĤG���X�T���Ϊ������G 
		�Y�L�k�c���T���ήɿ�X�uNo�v�F
	  	�Y�c���w���T���ήɿ�X�uObtuse�v�F  
	  	�Y�����T���ήɿ�X�uRight�v�F  
	  	�Y�U���T���ήɿ�X�uAcute�v�C 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a,b,c,i,j,Temp;
	int user[2]={0};
	printf("enter triangle :");
	scanf("%d %d %d",&user[0],&user[1],&user[2]);
	
	for (i = 0; i < 3; i++)
       for (j = i + 1; j < 3; j++)
          if (user[j] < user[i])
			{
				Temp = user[i];
				user[i] = user[j];
				user[j] = Temp;
			}
		
	printf("%d %d %d \n",user[0],user[1],user[2]);
	a =user[0]; b= user[1];c=user[2];

	if(a+b<=c) printf("no");
	else if(a*a+b*b<c*c) printf("Obtuse");
	else if(a*a+b*b==c*c) printf("Right");
	else if(a*a+b*b>c*c) printf("Acute");
	
	printf("\n");
	
}


 

