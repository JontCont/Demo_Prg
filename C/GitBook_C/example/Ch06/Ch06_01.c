 #include <stdio.h>
 
 int main(void)
 {
         // price �����, discount �O�馩 
   int price,discount;           
   int option;                 // �馩���ﶵ 

   printf("�п�J���~���:\n");
   scanf("%d",&price);         // ��J���~��� 
   printf("�O�_������ӫ~"); 
   printf("(��J 1 ��ܬO, ��l�Ʀr��ܤ��O): \n");
   scanf("%d",&option);        // ��ܬO�_���馩 

   if (option==1)              // �P�_�馩���ﶵ 
   {
     printf("�аݥ��X��? (�п�J 1~9 ���Ʀr)\n");
     scanf("%d",&discount);    // ��J�馩�� 
     price=price*discount*0.1; // �p�⥴��᪺��� 
   }

   printf("���I %d ��\n",price);
 
   return 0;
}
