import java.util.*;

public class Main {
	public static void main(String[] args){
		int n;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		if(n % 3 == 0 || n == 3) System.out.println("YES");
		else System.out.println("NO");
	}
}
