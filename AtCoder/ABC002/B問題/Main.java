import java.util.*;

public class Main {
	public static void main(String[] args){
		String str,ans = "";
		Scanner sc = new Scanner(System.in);
		str = sc.next();
		for(int i=0; i<str.length(); i++){
			if(!(str.charAt(i) == 'a' || str.charAt(i) == 'i' || str.charAt(i) == 'u' || str.charAt(i) == 'e' || str.charAt(i) == 'o')) ans += str.charAt(i);
		}
		System.out.println(ans);
	}
}
