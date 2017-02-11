import java.util.*;

public class Main {
	public static void main(String[] args){
		String s,t;
		Scanner sc = new Scanner(System.in);
		s = sc.next(); t = sc.next();
		Judge j = new Judge();
		if((j.check(s, t))) System.out.println("You can win");
		else System.out.println("You will lose");
		sc.close();
	}
}

class Judge{
	boolean check(String s, String t){
		for(int i=0; i<s.length(); i++){
			if(! this.match(s, t, i)) return false;
		}
		return true;
	}

	boolean match(String s, String t, int index){
		String str = "atcoder";
		if(s.charAt(index) == t.charAt(index)) return true;
		else if(s.charAt(index) == '@' && t.charAt(index) == '@') return true;
		else if(s.charAt(index) == '@' && str.indexOf(t.charAt(index)) >= 0) return true;
		else if(t.charAt(index) == '@' && str.indexOf(s.charAt(index)) >= 0) return true;
		return false;
	}
}
