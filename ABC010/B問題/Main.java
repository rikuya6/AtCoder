import java.util.*;

public class Main {
	public static void main(String[] args){
		int n, work, ans = 0;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		for(int i=0; i<n; i++){
			work = sc.nextInt();
			while(true){
				if(work % 2 != 0 && work % 5 != 0) break;
				else{
					work--;
					ans++;
				}
			}
		}
		System.out.println(ans);
	}
}
