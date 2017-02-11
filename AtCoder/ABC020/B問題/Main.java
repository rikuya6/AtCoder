import java.util.*;

public class Main {
	public static void main(String[] args){
		String a, b;
		int ans;
		Scanner sc = new Scanner(System.in);
		a = sc.next(); b = sc.next();
		a += b;
		ans = Integer.parseInt(a);
		System.out.println(ans * 2);
	}
}
