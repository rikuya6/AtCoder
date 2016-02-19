import java.util.*;

public class Main {
	public static void main(String[] args){
		int n, check, cnt = 0;
		boolean [] a = new boolean [100001];
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		for(int i=0; i<n; i++){
			check = sc.nextInt();
			if(Main.check(a, check)) cnt++;;
		}
		System.out.println(cnt);
	}

	static boolean check(boolean[] a, int index){
		if(a[index]) return true;
		else {
			a[index] = true;
			return false;
		}
	}
}
