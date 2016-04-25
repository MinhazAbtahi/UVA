import java.math.BigInteger;
import java.util.Scanner;

class Main {
 public static void main(String args[]) {
   Scanner sc = new Scanner(System.in);
   BigInteger zero = BigInteger.valueOf(0);
   BigInteger sum = BigInteger.valueOf(0);
   for(;;) {
     BigInteger n = sc.nextBigInteger();
     if(n.equals(zero)) break;
     sum = sum.add(n);
    }
    System.out.println(sum.toString());
  }
}