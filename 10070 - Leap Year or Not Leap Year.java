import java.math.BigInteger;
import java.util.Scanner;

class Main {
 public static void main(String[] args) {
  Scanner sc = new Scanner(System.in);

  BigInteger n;
  int lineSpace = 1;
  
  while (sc.hasNextBigInteger()) {
   if (lineSpace == 1)
    lineSpace = 0;
   else
    System.out.println();

   n = sc.nextBigInteger();
   int l = 0, f = 0;

   if ((n.mod(BigInteger.valueOf(4)).compareTo(BigInteger.ZERO) == 0 && n
     .mod(BigInteger.valueOf(100)).compareTo(BigInteger.ZERO) != 0)
     || n.mod(BigInteger.valueOf(400))
       .compareTo(BigInteger.ZERO) == 0) {
    System.out.println("This is leap year.");
    f = 1;
    l = 1;
   }
   if (n.mod(BigInteger.valueOf(15)).compareTo(BigInteger.ZERO) == 0) {
    System.out.println("This is huluculu festival year.");
    f = 1;
   }
   if (n.mod(BigInteger.valueOf(55)).compareTo(BigInteger.ZERO) == 0
     && l == 1) {
    System.out.println("This is bulukulu festival year.");
    f = 1;
   }
   if (f == 0) {
    System.out.println("This is an ordinary year.");
   }
  }
 }
}
