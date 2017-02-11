import java.util.*;

public class Main {
	public static void main(String[] args){
		int m, d;
		Scanner sc = new Scanner(System.in);
		m = sc.nextInt(); d = sc.nextInt();
		if(m % d == 0) System.out.println("YES");
		else System.out.println("NO");
	}
}
