import java.util.*;

public class Main {
	public static void main(String[] args){
		String s;
		Scanner sc = new Scanner(System.in);
		s = sc.next();
		s = s.substring(0, 1).toUpperCase() + s.substring(1).toLowerCase();
		System.out.println(s);
	}
}
