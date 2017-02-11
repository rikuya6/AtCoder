import java.util.*;

public class Main{
	public static void main(String [] args){
		int l, h, n, a;
		Scanner sc = new Scanner(System.in);
		l = sc.nextInt(); h = sc.nextInt(); n = sc.nextInt();
		for(int i=0; i<n; i++){
			a = sc.nextInt();
			if(a < l) System.out.println(l - a);
			else if(a > h) System.out.println(-1);
			else System.out.println(0);
		}
	}
}
