import java.util.*;

public class Main{
	public static void main(String[] args){
		int t, n, m, index = 0;
		int [] a, b;
		Scanner sc = new Scanner(System.in);
		t = sc.nextInt(); n = sc.nextInt();
		a = new int[n];
		for(int i=0; i<n; i++) a[i] = sc.nextInt();
		m = sc.nextInt();
		if(n < m){ //たこ焼きの数が足りていない。
			System.out.println("no");
			System.exit(0);
		}
		b = new int[m];
		for(int i=0; i<m; i++) b[i] = sc.nextInt();

		for(int i=0; i<n; i++){
			if(a[i] <= b[index]){
				if(t + a[i] >= b[index]) index++;
			}
			if(m == index) break; //全員に売れた。
		}
		if(m == index) System.out.println("yes");
		else System.out.println("no");
	}
}
