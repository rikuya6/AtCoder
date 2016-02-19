import java.util.*;

public class Main{
	public static void main(String[] args){
		int tx1, ty1, tx2, ty2, time, v, n, x, y;
		double sum;
		Scanner sc = new Scanner(System.in);
		tx1 = sc.nextInt(); ty1 = sc.nextInt(); tx2 = sc.nextInt(); ty2 = sc.nextInt(); time = sc.nextInt(); v = sc.nextInt();
		n = sc.nextInt();
		for(int i=0; i<n; i++){
			sum = 0.0;
			x = sc.nextInt(); y = sc.nextInt();
			sum += Main.distance(tx1, ty1, x, y); //電話前から家までの距離を足す
			sum += Main.distance(x, y, tx2, ty2); //家から電話後の距離を足す
			if(time * v >= sum){
				System.out.println("YES");
				return;
			}
		}
		System.out.println("NO");
	}

	static double distance(int x1, int y1, int x2, int y2){
		return Math.sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	}
}
