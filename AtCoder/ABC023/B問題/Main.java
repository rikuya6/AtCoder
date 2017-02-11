import java.util.*;

public class Main {
	public static void main(String[] args){
		int n;
		String s;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt(); s = sc.next();
		if(n % 2 == 0 || s.charAt(n / 2) != 'b'){
			System.out.println(-1);
			System.exit(0);
		}
		if(Main.check(s)) System.out.println(n / 2);
		else System.out.println(-1);
	}

	static boolean check(String s){
		for(int i=0; i<s.length() / 2; i++){
			if(s.charAt(i) == 'a' && s.charAt(s.length() - i - 1) == 'c') continue;
			else if(s.charAt(i) == 'c' && s.charAt(s.length() - i - 1) == 'a') continue;
			else if(s.charAt(i) == 'b' && s.charAt(s.length() - i - 1) == 'b') continue;
			else return false;
		}
		return true;
	}
}
