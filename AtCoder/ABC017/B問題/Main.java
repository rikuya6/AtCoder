import java.util.*;

public class Main {
	public static void main(String[] args){
		String x;
		Scanner sc = new Scanner(System.in);
		x = sc.next();
		if(Main.check(x)) System.out.println("YES");
		else System.out.println("NO");
	}

	static boolean check(String x){
		String [] choku = {"ch", "o", "k", "u"};
		if(x.length() == 0) return true;
		for(int i=0; i<choku.length; i++){
			if(x.endsWith(choku[i])){
				if(Main.check(x.substring(0, x.length() - choku[i].length() ))) return true;
                                 else return false;
			}
		}
		return false;
	}
}
