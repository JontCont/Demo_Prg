/*
    ��J�T�Ӥ��� (���wCondition operator ? :)
    1.�P�w i>31 �Y�i���2����i �A��l�����
    2.�P�w a < b ��, true �_�hfalse
    3.�P�w�_�Ƹ򰸼� 
*/
import java.util.Scanner;
class Conditional1{
    Scanner src= new Scanner(System.in);
    void ex01(){
        int num =src.nextInt(); 
        System.out.println(num<= 31? 1<<num:"not =>31");
    }
    void ex02(){
        int num1 =src.nextInt();
        int num2 =src.nextInt();
        System.out.println(num1 < num2? "true ":"false");
    }
    void ex03(){
        int num =src.nextInt();
        int x=(num%2);
        System.out.println(x==0 ? "���� ":"�_��");

    }
    
    public static void main(String[] args) {

        Conditional1 con1 = new Conditional1();
        
        for(;;){
            System.out.println("----------------");
            System.out.println("1..�P�w i>31");
            System.out.println("2..�P�w a < b");
            System.out.println("3..�P�w�_�Ƹ򰸼�");
            System.out.println("----------------");

        String user_num=con1.src.next();
        switch(user_num){
            case "1":con1.ex01();break;
            case "2":con1.ex02();break;
            case "3":con1.ex03();break;
            default:System.out.printf("NOT data");break;
            }
        }
        //con1.src.close();
    }
    
}