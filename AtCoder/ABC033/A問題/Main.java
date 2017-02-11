import java.util.*;

public class Main{
	public static void main(String [] args){
		String n;
		Scanner sc = new Scanner(System.in);
		n = sc.next();
		for(int i=0; i<3; i++){
			if(n.charAt(i) != n.charAt(i +1)){
				System.out.println("DIFFERENT");
				return;
			}
		}
		System.out.println("SAME");
	}
}
