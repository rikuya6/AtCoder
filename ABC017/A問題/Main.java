import java.util.*;

public class Main {
	public static void main(String[] args){
		int s, e, sum = 0;
		Scanner sc = new Scanner(System.in);
		for(int i=0; i<3; i++){
			s = sc.nextInt();
			e = sc.nextInt();
			sum += (int) (s * (double)e / 10.0);
		}
		System.out.println(sum);
	}
}
