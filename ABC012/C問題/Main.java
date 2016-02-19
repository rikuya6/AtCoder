import java.util.*;

public class Main{
	public static void main(String[] args){
		int n, max = 2025, sum; // 1 + 2 + 3...+ 9 = 45; 45*45=2025; 1944は81が9*9がない
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt(); sc.close();
		sum = max - n;
		for(int i=1; i<10; i++){
			for(int k=1; k<10; k++){
				if(i * k == sum) System.out.println(i + " x " + k);
			}
		}
	}
}
