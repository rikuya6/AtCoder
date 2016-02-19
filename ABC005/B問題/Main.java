import java.util.*;

public class Main {
	public static void main(String[] args){
		int n, t, min = 999;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		for(int i=0; i<n; i++){
			t = sc.nextInt();
			if(t < min) min = t;
		}
		System.out.println(min);
	}
}
