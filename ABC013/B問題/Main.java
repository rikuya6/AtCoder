import java.util.*;

public class Main {
	public static void main(String[] args){
		int a, b, work, sum = 0;
		Scanner sc = new Scanner(System.in);
		a = sc.nextInt(); b = sc.nextInt();
		if(a < b){
			work = b;
			b = a;
			a = work;
		}
		sum = a - b;
		if(sum >= 6) sum = 10 - sum;
		System.out.println(sum);
	}
}
