//クラスを作る練習。
import java.util.*;

public class Main {
	public static void main(String[] args){
		int n, a, b, d;
		String s;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt(); a = sc.nextInt(); b = sc.nextInt();
		choku c = new choku();
		for(int i=0; i<n; i++){
			s = sc.next(); d = sc.nextInt();
			c.compute(s, d, a, b);
		}
		if(c.getDirection().length() > 0) System.out.println(c.getDirection() + " " + c.getLocation());
		else System.out.println(c.getLocation());
	}
}

class choku {
	private String direction;
	private int location = 0;

	void compute(String s, int m, int min, int max){
		if(m < min) m = min;
		if(m > max) m = max;
		if(s.equals("East")) location += m;
		else location -= m;
		if(location > 0) direction = "East";
		else if(location < 0) direction = "West";
		else direction = "";
	}

	String getDirection(){
		return direction;
	}

	int getLocation(){
		if(location < 0) location *= -1;
		return location;
	}
}
