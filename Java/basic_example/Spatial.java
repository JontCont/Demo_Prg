import java.util.*;
/* 
�Ŷ�����
	���e
		>>����N�����n�A�Ŷ�����n �ӥ����̦h�i�N�Ŷ������X�Ӱϰ�H
		
	�d�ҿ�J
	1
	2
	�d�ҿ�X
	2
	4
���ܡG(nnn+5n+6)/6
*/
class Spatial{
    public static void main(String[] args) {
        Scanner src = new Scanner(System.in);
        System.out.println("enter number ?");
        int n = src.nextInt();
        int a = src.nextInt();
        System.out.println(">>"+(n*n*n+5*n+6)/6);
        System.out.println(">>"+(a*a*a+5*a+6)/6);

        src.close();
    }
}