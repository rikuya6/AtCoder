import java.util.*;

public class Main {
	public static void main(String[] args){
		int n, max1 = -1, max2 = -1, work;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		for(int i=0; i<n; i++){
			work = sc.nextInt();
			if(work > max1){
				max2 = max1;
				max1 = work;
			}else if(work > max2 && work != max1) max2 = work;
			//System.out.println(max1 + " " + max2);
		}
		System.out.println(max2);
	}
}
