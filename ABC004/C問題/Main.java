import java.util.*;

public class Main{
	public static void main(String[] args){
		int n, work;
		int [] card = {1, 2, 3 ,4 ,5 ,6};
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		n %= 30; //30回で元に戻るから残りだけ。
		for(int i=0; i<n; i++){
			work = card[(i % 5)];
			card[(i % 5)] = card[(i % 5) + 1];
			card[(i % 5) + 1] = work;
		}
		for(int i=0; i<6; i++) System.out.print(card[i]);
		System.out.println();
	}
}
