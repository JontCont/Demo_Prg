import java.util.Scanner;

class conversion{
    public static void main(String[] agve){
        System.out.println("----------------------\n");
        System.out.println("-�ϥ� ����૬ �m��----\n");
        System.out.println("----------------------\n");
        Scanner src = new Scanner(System.in);
        int i = src.nextInt();
        //-------------------------------------------//
        System.out.println("��J�O(INT���A) "+i);
        
        byte by = (byte)i;
        System.out.println("(BYTE ���e):"+by);
       
        short sh = (short)i;
        System.out.println("(SHORT ���e):"+sh);
        
        String str =Integer.toString(i);
        System.out.println("(STRING ���e):"+str);

        src.close();       
    }
}