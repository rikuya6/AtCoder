import java.util.*;

public class Main {
	public static void main(String[] args){
		int n, a, cnt = 0, sum = 0;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		for(int i=0; i<n; i++){
			a = sc.nextInt();
			if(a > 0) cnt++;
			sum += a;
		}
		System.out.println((int)(Math.ceil((double)sum / cnt)));
	}
}
