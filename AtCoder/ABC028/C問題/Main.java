import java.util.*;

public class Main{
	public static void main(String[] args){
		int [] num = new int[5];
		int ans;
		Scanner sc = new Scanner(System.in);
		for(int i=0; i<5; i++) num[i] = sc.nextInt();
		ans = Math.max(num[4] + num[3] + num[0], num[4] + num[2] + num[1]);
		System.out.println(ans);
	}
}
