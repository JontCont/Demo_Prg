import java.util.*;

class STL_set01{
    public static void main (String agev[]){
        Scanner src =new Scanner(System.in);
        
        System.out.println("--��r���s�C��--���i����!!");
        System.out.println("--0 EXIT --");
        System.out.print(">>");
        String str = src.next();

        HashSet<String> hset = new HashSet<>();
        while(!str.equals("0"))
        {
            if(!hset.add(str))
            {
                System.out.print("����!!");
                break;
            }
            System.out.print(">>");
            str=src.next();
        }
        System.out.println("\n�w�g��J�L���� :"+ hset);
        src.close();
    }
}