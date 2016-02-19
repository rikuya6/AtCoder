import java.util.*;

public class Main{
	public static void main(String [] args){
		String s;
//		ArrayList<String> sub = new ArrayList<>();
		int k, cnt = 0;
		Set<String> set = new HashSet<>();
		Scanner sc = new Scanner(System.in);
		s = sc.next(); k = sc.nextInt(); sc.close();
		for(int i=0; i<s.length()-k + 1; i++){
//			sub.add(s.substring(i, i + k));
//			System.out.println(sub.get(i));
			if(set.add(s.substring(i, i + k))) cnt++;
		}
		System.out.println(cnt);
	}
}
