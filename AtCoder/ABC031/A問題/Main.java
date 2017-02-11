import java.util.*;

public class Main{
	public static void main(String [] args){
		int a, d;
		Scanner sc = new Scanner(System.in);
		a = sc.nextInt(); d = sc.nextInt();
		if((a + 1) * d >= a * (d + 1)) System.out.println((a + 1) * d);
		else System.out.println(a * (d + 1));
	}
}
