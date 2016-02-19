import java.util.*;

public class Main{
	public static void main(String [] args){
		int a, b, n;
		Scanner sc = new Scanner(System.in);
		a = sc.nextInt(); b = sc.nextInt(); n = sc.nextInt();
		while(n % a != 0 || n % b != 0){
			n++;
		}
		System.out.println(n);
	}
}
