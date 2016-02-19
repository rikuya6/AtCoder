import java.util.*;

public class Main{
	public static void main(String [] args){
		char [] s;
		int cnt;
		Scanner sc = new Scanner(System.in);
		s = sc.next().toCharArray();
		for(int i='A'; i<='F'; i++){
			cnt = 0;
			for(int k=0; k<s.length; k++){
				if(s[k] == i) cnt++;
			}
			if(i != 'F') System.out.print(cnt + " ");
			else System.out.println(cnt);
		}
	}
}
