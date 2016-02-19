import java.util.*;

public class Main{
	public static void main(String [] args){
		int n, avg, sum = 0, cnt = 0;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		int [] a = new int[n];
		for(int i=0; i<n; i++){
			a[i] = sc.nextInt();
			sum += a[i];
		}
		if(sum % n != 0){
			System.out.println(-1);
			System.exit(0);
		}
		avg = sum / n;
		sum = 0;
		for(int i=0; i<n-1; i++){
			sum += a[i];
			if(sum != avg * (i+1)) cnt++;
		}
		System.out.println(cnt);
	}
}
