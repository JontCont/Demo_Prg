import java.io.*;
import java.util.*;

class basic //���[public class __�ɦW__{}�ɡA�w�]�Opublic
{
    static int NUM=5;
    public static void main(String[] args) 
    {
		/* ��W���o��欰��O�T�w���{�����[*/
        // �b main() ��k���N�O�ڭ̭n���檺�{��
        int i  = 0,sum=0; 
        float Average=0;
        int  score1=60,score2=70,score3=80,score4=85,score5=90;
        int[] Score=new int []{60,70,80,85,90};

        //output
        System.out.printf("==================== \n");
        System.out.printf("+hello java world!!+ \n");
        System.out.printf("+    ²����X      +  \n");
        System.out.printf("==================== \n");
        System.out.println(i);
        
        //intput
        Scanner src  = new Scanner(System.in);
        i  = src.nextInt();                     //next() > nextByte() > nextLong() > nextShort () > nextBoolean() > nextDouble() > nextFloat(); 
        System.out.println("�A��J�O"+i);
        
        //�[�`
        Average = (float)(score1+score2+score3+score4+score5)/5 ;  //�j���ഫfloat
        System.out.println("�������Z�G" + Average);

        //�}�C�[�`
        Average = 0;

        for (i = 0; i<NUM;i++ )                
            sum+=Score[i];
        Average=(float)(sum/NUM);
        System.out.println("�������Z�G" + Average);


    }
}