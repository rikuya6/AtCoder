import java.util.*;

public class Main {
	public static void main(String[] args){
		int n, t, a, a2, sum = 0;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt(); t = sc.nextInt();
		sum += t;
		a = sc.nextInt();
		for(int i=0; i<n-1; i++){
			a2 = sc.nextInt();
			if(a2 - a <= t) sum += a2 - a;
			else sum += t;
			a = a2;
		}
		System.out.println(sum);
	}
}
