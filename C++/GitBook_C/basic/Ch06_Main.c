#include <stdio.h>
#include <string.h>
#include "Ch06.h" 


int Price_01 ()
 {
         // price �����, discount �O�馩 
   int price,discount;           
   char option;                 // �馩���ﶵ 

   printf("�п�J���~���:");
   scanf("%d",&price);         // ��J���~��� 

   printf("�O�_������ӫ~"); 
   printf("(��J Y OR y ��ܬO, ��l�Ʀr��ܤ��O): \n");
   scanf("%s",&option);        // ��ܬO�_���馩 

   if(option ==  'y' || option == 'Y')           // �P�_�馩���ﶵ 
   {
     printf("�аݥ��X��? (�п�J 1~9 ���Ʀr)\n");
     scanf("%d",&discount);    // ��J�馩�� 
     price=price*discount*0.1; // �p�⥴��᪺��� 
     if(discount>9)	{
     	printf("��J���~ \n");
     	return 0;
	 }	 	
     printf("���I %d ��\n",price);
   }
 	else	
 		printf("���I %d ��\n",price);
	 
    //return Price_01;
}

int main (){
	int user_option=0;
	
	while(1){	
	
	printf("||=====================================================|| \n");
	printf("||----------------�Ĥ��� ��X�B�I�s--------------------|| \n");
	printf("||-----------------------------------------------------|| \n");
	printf("||--1_CH06-1 ���--------------4_CH06-4 if     �ϥ�(1)-|| \n");
	printf("||--2_CH06-2 �P�O--------------5_CH06-5 Switch �ϥ�(1)-|| \n");
	printf("||--3_CH06-3 ����--------------6_CH06-6 Switch �ϥ�(2)-|| \n");
	printf("||=====================================================|| \n\n");
	
	printf("�п�J�ﶵ:");
	
	scanf("%d",&user_option);
	
		switch(user_option)
		{
			case 1:Price_01();printf("\n");break;
			case 2:Ch06_02();printf("\n");break;
			case 3:Ch06_03();printf("\n");break;
			case 4:Ch06_04();printf("\n");break;
			case 5:Ch06_05();printf("\n");break;
			case 6:Ch06_06();printf("\n");break;
			default:
				if(user_option!=0)printf("��J���~\n"); 
				else printf("���}��...");
		}
	if(user_option==0) return 0;
	}


}
