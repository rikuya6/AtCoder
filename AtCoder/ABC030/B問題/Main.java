import java.util.*;

public class Main{
	public static void main(String [] args){
		double n, m, l, s, sum;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt(); m = sc.nextInt();
		l = ((n % 12) * 30.0 + m * 0.5);
		s = m * 6;
		sum = Math.abs(l - s);
		if(sum > 180) System.out.println(360 - sum);
		else System.out.println(sum);
	}
}
