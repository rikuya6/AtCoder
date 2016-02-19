import java.util.*;

public class Main{
	public static void main(String[] args){
		int n, k;
		double ans = 0.0;
		ArrayList<Integer> r = new ArrayList<>();;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt(); k = sc.nextInt();
		for(int i=0; i<n; i++) r.add(sc.nextInt()); //入力
		Collections.sort(r);
		Collections.reverse(r); //降順にソート。
		for(int i=k-1; i>=0; i--){ //インデックスを合わすために、k-1
			ans = (ans + r.get(i)) / 2.0;
		}
		System.out.println(ans);
	}
}
