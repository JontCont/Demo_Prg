/*
string �Ĥ@�D    
�ϥ�String="a,b,c,d,e...",�אּ��X��a1,b2,c3,d4....
*/

class String_ex01{
    public static void main(String[] args) {
        String str = "a,b,c,d,e";
        String []ss=str.split(",");
        //------------�Ĥ@��---------------//
        for(int i=0;i<ss.length;i++)
        {
            System.out.print(ss[i]+(i+1)+" ");
        }
        System.out.println();
        //------------�ĤG��---------------//
        int num =0;
        for(String s1:ss){
            System.out.print(s1+(num+1)+" ");
        }   
    }
}