class Datatype
{
    public static void main(String[] args) 
    {
        /*--------------------------------- */
        //example
        int age;    //�X�k�ܼƦW��
        int AGE;    //�X�k�ܼƦW��
        int Age;    //�X�k�ܼƦW��
        int No1;    //�X�k�ܼƦW��
        int No11111111; //�X�k�ܼƦW��
        int _Total; //�X�k�ܼƦW��
        age = 19;   //�X�k�ܼƦW��
        /*---------------------------------*/
        int i;
        char ch,c;
        float f1 = 0.01f,f2 = 0.99f;
        double r= 3.0;
        final double PI=3.14;
        byte b;
        short s;
        /* content */
        ch = 'a';
        i = ch;
        System.out.println(ch + " ���r�X���G" + i);
        /*--------------------------------------- */
        ch = 'b';  // ���w����@�^��r��
        System.out.println("�ܼ� ch �����e���G" + ch);
        ch = '��'; // ���w����@����r
        System.out.println("�ܼ� ch �����e���G" + ch);
        ch = 98;   // ���w���ƭ�
        System.out.println("�ܼ� ch �����e���G" + ch);
        /*-------------------------------------------*/
        ch = '\u5b57'; // 16 �i�� 5b57 �O '�r' �� Unicode �s�X
        System.out.println("�ܼ� ch �����e���G" + ch);
        
        ch = '\\';     // �ϱ׽u \
        System.out.println("�ܼ� ch �����e���G" + ch);
        
        ch = '\'';     // �޸� '
        System.out.println("�ܼ� ch �����e���G" + ch);
        /*-------------------------------------------*/
        System.out.println("��P :"+PI*r*2); 
        System.out.println("���n :"+PI*r*r);
        /*------------------------------------------- */
        f1 = f1 + f2; // �[�k�B��
        System.out.println("�p�⪺���G�O�G" + f1);
        /*--------------------------------------------*/
        b = 122;
        s = 233;
        c = 233;
        System.out.println("�ܼ� b �����e�O�G" + b);
        System.out.println("�ܼ� s �����e�O�G" + s);
        System.out.println("�ܼ� c �����e�O�G" + c);
        s= 0;
        /*------------------------------------------- */
        i = 0b10011001 ; // int ���O, 2�i�� 
        System.out.println("2�i��  0b10011001 = " + i);
        
        long l = 0XADEF; // long ���O, 16�i�� 
        System.out.println("16�i�� 0XADEF     = " + l);
        s = 01357; // short ���O, 8�i��
        System.out.println("8�i��  01357      = " + s);
        /*-------------------------------------------*/
       /* 
        int 3age;   // ????H??r?}?Y
        int #AGE;   // ?????? "#"  ?r?? 
        int A#GE;   // ?????? "#"  ?r??
        int while;  // ??????????r
        int true;   // ?????????O?d???r???`??
        3age = 19;
        System.out.println("number is:" + 3age);
        */
    }//main();
}//class