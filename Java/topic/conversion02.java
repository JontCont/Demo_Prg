import java.util.Scanner;

class conversion02{
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        String str = scn.next();
        if(str != null &&  str.matches("^[0.0-9.0]+$"))
        {
            double num = Double.parseDouble(str);
            System.out.println("��J�O�Ʀr�I"+num);
        }
        else System.out.println("��J�Ȭ��r�� :"+str);
            
        scn.close();
    }
}