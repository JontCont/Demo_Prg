/* 
******Menu**********
A ����
B �T����
C EXIT
********************
PLS enter option funtion : A
PLS enter Integer :6
6 ������ = 36
*/
import java.util.*;
public class MenuEx 
{
    public static void main(String[] args) 
    {
        String enter_Menu=""; 
        int enter_INT=0,num=0; 
        Scanner src  = new Scanner(System.in);
        
        do
        {
            System.out.println("******Menu****** ");
            System.out.println("    A ����");
            System.out.println("    B �T����");
            System.out.println("    C EXIT");
            System.out.println("****************");
            do
            {
                System.out.printf("PLS enter option funtion :");
                enter_Menu= src.next().toUpperCase();
            }while("ABC".indexOf(enter_Menu)==-1);
            if(!(enter_Menu.equals("C")))
            {
                System.out.printf("PLS enter Integer :");
                enter_INT = src.nextInt();
                num = enter_INT;
            }
            switch (enter_Menu) {
                case "A":
                    System.out.printf("%d������ = %3d%n%n%n",num,num*num);
                    break;
                case "B":
                    System.out.printf("%d���T���� = %4d%n%n%n",num,num*num*num);

                    break;
                case "C":System.out.println("exit...");            
            }  
        }while(!(enter_Menu.equals("C")));
        src.close();
    }
}