import java.util.*;

public class Main{
	public static void main(String [] args){
		int l1, l2, l3;
		Scanner sc = new Scanner(System.in);
		l1 = sc.nextInt(); l2 = sc.nextInt(); l3 = sc.nextInt();
		if(l1 == l2) System.out.println(l3);
		else if(l1 == l3) System.out.println(l2);
		else if(l2 == l3) System.out.println(l1);
	}
}
