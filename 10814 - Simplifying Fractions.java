import java.util.*;
import java.math.*;

class Main {
  
  /**
   * Get fraction a / b. Find g : GCD(a, b). Divide both a, b by g. Output.
   **/
  
  // private static BigInteger gcd(BigInteger a, BigInteger b) {
  // BigInteger t;
  // while (a.compareTo(BigInteger.ZERO) != 0) {
  // t = a;
  // a = b.mod(a); 
  // b = t;
  // }
  // return b;
  // }
  
  public static void main(String[] args) {
    // TODO Auto-generated method stub
    int t;
    String str;
    BigInteger a, b, bigGcd;
    Scanner sc = new Scanner(System.in);
    
    t = sc.nextInt();
    
    while (t-- > 0) {
      a = sc.nextBigInteger();
      str = sc.next();  // for taking '/' character
      b = sc.nextBigInteger(); 
      
      bigGcd = a.gcd(b);
      
      System.out.println(a.divide(bigGcd) + " / " + b.divide(bigGcd));
    }
  }
  
}