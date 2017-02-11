import java.util.*;

public class Main {
	public static void main(String[] args){
		int a, b, c, k, s, t, sum = 0;
		Scanner sc = new Scanner(System.in);
		a = sc.nextInt(); b = sc.nextInt(); c = sc.nextInt(); k = sc.nextInt();
		s = sc.nextInt(); t = sc.nextInt();
		sum += a * s + b * t;
		if(s + t >= k) sum -= (s + t) * c;
		System.out.println(sum);
	}
}
