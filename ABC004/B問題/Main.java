import java.util.*;

public class Main {
	public static void main(String[] args){
		String [] c = new String[4];
		Scanner sc = new Scanner(System.in);
		for(int i=0; i<4; i++) c[i] = sc.nextLine();
		for(int i=3; i>=0; i--){
			for(int k=c[i].length() - 1; k >= 0; k--){
				System.out.print(c[i].charAt(k));
			}
			System.out.println("");
		}
		sc.close();
	}
}
