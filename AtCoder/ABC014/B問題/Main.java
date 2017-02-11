import java.util.*;

public class Main {
	public static void main(String[] args){
		int n, x, sum = 0;
		ArrayList<Integer> bit, value = new ArrayList<Integer>();
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt(); x = sc.nextInt();
		for(int i=0; i<n; i++) value.add(sc.nextInt());
		Conversion c = new Conversion();
		bit = c.binary(x);
		for(int i=0; i<bit.size(); i++){
			if(bit.get(i) == 1) sum += value.get(i);
		}
		System.out.println(sum);
	}
}

class Conversion{
	ArrayList<Integer> binary(int x){
		ArrayList<Integer> bit = new ArrayList<Integer>();
		while(x > 0){
			bit.add(x % 2);
			x /= 2;
		}
		return bit;
	}
}
