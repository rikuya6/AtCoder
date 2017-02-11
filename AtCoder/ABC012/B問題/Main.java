import java.util.*;

public class Main {
	public static void main(String[] args){
		int n, h, m ,s;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		h = n / 3600;
		m = (n / 60) % 60;
		s = n % 60;
		System.out.printf("%02d:%02d:%02d%n",h, m, s);
	}
}
