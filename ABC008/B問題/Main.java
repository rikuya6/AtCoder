import java.util.*;

public class Main {
	public static void main(String[] args){
		int n, max = -1, maxi = 0;
		int [] rank = new int[50];
		String work;
		ArrayList<String> s = new ArrayList<String>();
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		for(int i=0; i<n; i++){
			work = sc.next();
			if(s.indexOf(work) == -1) s.add(work);
			else{
				rank[s.indexOf(work)]++;
				//System.out.println("index:" + s.indexOf(work));
			}
		}
		for(int i=0; i<s.size(); i++){
			if(rank[i] > max){
				max = rank[i];
				maxi = i;
			}
		}
		System.out.println(s.get(maxi));
	}
}
