import java.util.Scanner;
import java.math.BigInteger;

class Main {

 public static void main(String[] args) {
  // TODO Auto-generated method stub
  Scanner sc = new Scanner(System.in);
  StringBuffer sb;
  BigInteger b1, b2, sum;
  int T = sc.nextInt();

  while (T-- > 0) {
   sb = new StringBuffer(sc.next());
   b1 = new BigInteger(sb.reverse().toString());
   sb = new StringBuffer(sc.next());
   b2 = new BigInteger(sb.reverse().toString());

   sum = b1.add(b2);
   sb = new StringBuffer(sum.toString()).reverse();
   sum = new BigInteger(sb.toString());

   System.out.println(sum);
  }
 }
}
