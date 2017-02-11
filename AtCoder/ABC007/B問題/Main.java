import java.util.*;

public class Main {
	public static void main(String[] args){
		String a;
		Scanner sc = new Scanner(System.in);
		a = sc.next();
		if(a.length() == 1 && a.charAt(0) == 'a') System.out.println(-1);
		else System.out.println('a');
	}
}
