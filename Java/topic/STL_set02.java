import java.util.*;

class STL_set02{
    public static void main(String[] args) {
        HashSet<String> hset = new HashSet<>();
        int order = 1; 
        String str ;
        Scanner src = new Scanner(System.in);
        
        System.out.println("��J�|�Ӥ����ƭ^��r");
        while(order<=4){
            System.out.println("No."+order+" a String..");
            System.out.print(">>");
            str = src.nextLine();
            if(hset.add(str))           
                order++;
            else
                System.out.println(" "+str+"���ƭ^��r!!");
        }
        System.out.println("4�Ӧr����O�� >>");
        System.out.println(hset);
        System.out.println("��J�A�n���^��r");
        String findstr = src.nextLine();
        if(hset.contains(findstr))
            System.out.println(" "+findstr+ "�r��b���X�����!!");
        else
            System.out.println(" "+findstr+ "�r�ꤣ�s�b���X�����!!");
        System.out.print("Delete ?? >>");
        String findstr02 = src.nextLine();
        if(hset.remove(findstr02))
            System.out.println("delete : >>"+findstr02);
        else   
            System.out.println(" "+findstr02+"�r�ꤣ�s�b���X�����");

        System.out.println("�ثe���X���� : "+hset.size()+", type :"+hset);
        src.close();
    }
}