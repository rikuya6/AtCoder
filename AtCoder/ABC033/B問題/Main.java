import java.util.*;

public class Main{
	public static void main(String [] args){
		int n, max = -1, index = -1, sum = 0, maj;
		int [] p;
		String [] s;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		p = new int[n]; s = new String[n];
		for(int i=0; i<n; i++){
			s[i] = sc.next();
			p[i] = sc.nextInt();
			sum += p[i];
			if(p[i] > max){
				max = p[i];
				index = i;
			}
		}
		maj = sum / 2;
		//System.out.println(maj +  " " + p[index] );
		if(p[index] > maj) System.out.println(s[index]);
		else System.out.println("atcoder");
	}
}
