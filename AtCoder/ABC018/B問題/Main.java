import java.util.*;

public class Main {
	public static void main(String[] args){
		int n, i, r;
		String s;
		Scanner sc = new Scanner(System.in);
		s = sc.next(); n = sc.nextInt();
		for(int k=0; k<n; k++){
			i = sc.nextInt(); r = sc.nextInt();
			s = Main.reverse(s, i, r);
		}
		System.out.println(s);
	}

	static String reverse(String str, int start, int end){
		char[]tmp = str.toCharArray();
		char work;
		while(start < end){
			work = tmp[start - 1];
			tmp[start - 1] = tmp[end - 1];
			tmp[end - 1] = work;
			start++;
			end--;
		}
		return String.valueOf(tmp);
	}
}
