import java.util.*;

public class Main {
	public static void main(String[] args){
		int n, a, b, k, work;
		ArrayList<Integer> p = new ArrayList<Integer>();
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		a = sc.nextInt(); b = sc.nextInt();
		k = sc.nextInt();
		for(int i=0; i<k; i++){
			work = sc.nextInt();
			if(!Main.check(a, b, p, work)){
				System.out.println("NO");
				System.exit(0);
			}
		}
		System.out.println("YES");
	}

	static boolean check(int a, int b, ArrayList<Integer> p, int work){
		if(work == a || work == b || p.indexOf(work) >= 0) return false;
		p.add(work);
		return true;
	}
}
