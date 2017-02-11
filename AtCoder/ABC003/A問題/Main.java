import java.util.*;

public class Main {
	public static void main(String[] args){
		int n;
		double ans = 0.0;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		for(int i=1; i<=n; i++){
			ans += (10000 * i) * (1.0/ n);
		}
		System.out.println((int)ans);
	}
}
