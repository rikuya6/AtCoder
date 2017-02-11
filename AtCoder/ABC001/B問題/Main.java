import java.util.*;

public class Main {
	public static void main(String[] args){
		int m;
		Scanner sc = new Scanner(System.in);
		m = sc.nextInt();
		if(m < 100) System.out.println("00");
		else if(m >= 100 && m <= 5000) System.out.println(String.format("%02d", m/100));
		else if(m >= 6000 && m <= 30000) System.out.println(m/1000 + 50);
		else if(m >= 35000 && m <= 70000) System.out.println(((m/1000-30)/5 + 80));
		else System.out.println("89");
	}
}
