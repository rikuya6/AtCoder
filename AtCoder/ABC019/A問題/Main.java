コード
import java.util.*;
 
public class Main {
	public static void main(String[] args){
		int [] value = new int[3];
		int work, min, index = 0;
		Scanner sc = new Scanner(System.in);
		for(int i=0; i<3; i++) value[i] = sc.nextInt();
		for(int i=0; i<2; i++){
			min = 999;
			for(int k=i; k<3; k++){
				if(value[k] < min){
					min = value[k];
					index = k;
				}
			}
			work = value[i];
			value[i] = value[index];
			value[index] = work;
		}
		System.out.println(value[1]);
	}
}