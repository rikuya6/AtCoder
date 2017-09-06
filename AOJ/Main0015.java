import java.util.*;
import java.math.BigInteger;

public class Main0015 {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n;
    n = sc.nextInt();
    for (int i = 0; i < n; i++) {
      BigInteger sum = new BigInteger("0");
      String v1 = sc.next(), v2 = sc.next();
      sum = sum.add(new BigInteger(v1));
      sum = sum.add(new BigInteger(v2));
      if (sum.toString().length() > 80) System.out.println("overflow");
      else System.out.println(sum.toString());
    }
  }
}
