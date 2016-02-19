import java.util.*;

public class Main {
	public static void main(String[] args){
		int n, s, t, w, a, cnt = 0;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt(); s = sc.nextInt(); t = sc.nextInt(); w = sc.nextInt();
		if(w >= s && w <= t) cnt++;
		for(int i=0; i<n-1; i++){
			a = sc.nextInt();
			w += a;
			if(w >= s && w <= t) cnt++;
		}
		System.out.println(cnt);
	}
}
