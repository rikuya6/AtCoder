import java.util.*;

public class Main {
	public static void main(String[] args){
		int a, b, c;
		Scanner sc = new Scanner(System.in);
		Decision d = new Decision();
		a = sc.nextInt(); b = sc.nextInt(); c = sc.nextInt();
		System.out.println(d.dec(a, b, c));
	}
}

class Decision{
	String dec(int a, int b, int c){
		String [] ans = {"?", "+", "-", "!"};
		int index = check(a,b,c);
		return ans[index];
	}

	int check(int a, int b, int c){
		if(a + b == c && a - b == c) return 0;
		else if(a + b == c) return 1;
		else if(a - b == c) return 2;
		return 3;
	}
}
