import java.util.*;

public class Main{
	public static void main(String [] args){
		int n;
		double sum = 0.0;
		int [] r;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		r = new int [n];
		for(int i=0; i<n; i++) r[i] = sc.nextInt();
		Arrays.sort(r);
		for(int i=0; i<n; i++){
			if(i % 2 == 0) sum += r[i] * r[i];
			else sum -= r[i] * r[i];
		}
		sum *= Math.PI;
		if(sum < 0) sum *= -1;
		System.out.println(sum);
	}
}
