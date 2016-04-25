import java.util.Scanner;
import java.math.BigInteger;

class Main {

 public static void main(String[] args) {
  // TODO Auto-generated method stub
  BigInteger[] bigInt = new BigInteger[4010];

  bigInt[0] = BigInteger.ZERO;
  bigInt[1] = BigInteger.ONE;
  for (int i = 2; i < bigInt.length; i++) {
   bigInt[i] = bigInt[i - 1].add(bigInt[i - 2]);
  }

  Scanner sc = new Scanner(System.in);
  int n = sc.nextInt();
  while (n > 0) {
   System.out.println(bigInt[n * 2]);
   n = sc.nextInt();
  }
 }
}