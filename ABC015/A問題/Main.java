import java.util.*;

public class Main {
	public static void main(String[] args){
		String a,b;
		Scanner sc = new Scanner(System.in);
		a = sc.next(); b = sc.next();
		if(a.length() > b.length()) System.out.println(a);
		else System.out.println(b);
	}
}
