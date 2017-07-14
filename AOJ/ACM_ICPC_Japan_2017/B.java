import java.io.*;
import java.util.Scanner;
import java.util.regex.*;

public class B {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String x1, x2;
		String[] xx1, xx2;
		
		Scanner sc = new Scanner(System.in);
		
		x1 = sc.nextLine();
		while(!x1.equals(".")) {
			x2 = sc.nextLine();
			x1 += "\"E\"R";
			x2 += "\"E\"R";
			xx1 = x1.split("\"");
			xx2 = x2.split("\"");
			int m = xx1.length < xx2.length ? xx1.length : xx2.length;
//			System.out.println(xx1.length + " = " + xx2.length);
			int count = 0;
			for(int i = 0;i < m;i++) {
//				System.out.println(xx1[i] + " - " + xx2[i]);
				if(i % 2 == 1) {
					if(xx1[i].equals(xx2[i])) {
						continue;
					}else{
						count++;
					}
				}else {
					if(!xx1[i].equals(xx2[i])) {
						count = 10;
						break;
					}
				}
			}
			if(count == 0 && xx1.length == xx2.length) {
				System.out.println("IDENTICAL");
			}else if(count == 1 ) {
				System.out.println("CLOSE");
			}else {
				System.out.println("DIFFERENT");
			}
			x1 = sc.nextLine();
		}
		sc.close();
	}

}
