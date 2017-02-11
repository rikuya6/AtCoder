import java.util.*;

public class Main {
	public static void main(String[] args){
		int n;
		ArrayList<Integer> a = new ArrayList<Integer>();
		a.add(0); a.add(0); a.add(1);
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		for(int i=3; i<n; i++){
			a.add((a.get(i-1) + a.get(i-2) + a.get(i-3)) % 10007);
		}
		System.out.println(a.get(n - 1));
	}
}
