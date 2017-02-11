import java.util.*;

public class Main {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		Rle run = new Rle();
		System.out.println(run.rle(sc.next()));
	}
}

class Rle {
	String rle(String str){
		String ans = new String();
		int index = 0;
		for(int i=0; i<str.length(); i++){
			index = this.count(str, i);
			ans += str.charAt(i);
			ans += String.valueOf(index - i + 1);
			i = index;
		}
		return ans;
	}

	int count(String str, int index){
		//System.out.println("index:" + index);
		int cnt = -1;
		char target = str.charAt(index);
		for(int i=index; i<str.length(); i++){
			//System.out.println(index + i);
			if(target == str.charAt(i)) cnt++;
			else break;
		}
		//System.out.println("return: " + (index + cnt));
		return index + cnt; //どこまで続いていたか
	}
}
