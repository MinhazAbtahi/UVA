import java.util.Scanner;
import java.math.BigInteger;

class Main {

 public static void main(String[] args) {
  Scanner in = new Scanner(System.in);
  int b = in.nextInt();
  while (b != 0) {
   BigInteger p = new BigInteger(in.next(), b);
   BigInteger m = new BigInteger(in.next(), b);
   System.out.println(p.mod(m).toString(b));
   b = in.nextInt();
  }
 }
}