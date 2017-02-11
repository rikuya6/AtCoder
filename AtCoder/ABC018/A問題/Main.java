import java.util.*;

public class Main {
	public static void main(String[] args){
		int [] value = new int[3];
		int [] rank = new int[3]; Arrays.fill(rank, 1); //1で初期化
		Scanner sc = new Scanner(System.in);
		for(int i=0; i<3; i++) value[i] = sc.nextInt(); //入力
		for(int i=0; i<2; i++){
			for(int k=i+1; k<3; k++){
				if(value[i] < value[k]) rank[i]++;
				else rank[k]++;
			}
		}
		for(int i=0; i<3; i++) System.out.println(rank[i]);
	}
}
