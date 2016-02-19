import java.util.*;

public class Main {
	public static void main(String[] args){
		String s;
		int n;
		Scanner sc = new Scanner(System.in);
		s = sc.next(); n = sc.nextInt();
		System.out.print(s.charAt((n-1) / 5));
		System.out.println(s.charAt((n-1) % 5));
	}
}
