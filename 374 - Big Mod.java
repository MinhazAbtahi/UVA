import java.math.BigInteger;
import java.util.Scanner;

class Main {

 public static void main(String[] args) {
  // TODO Auto-generated method stub
  Scanner sc = new Scanner(System.in);
  BigInteger B,P,M;
  
  while(sc.hasNext()){
   B = sc.nextBigInteger();
   P = sc.nextBigInteger();
   M = sc.nextBigInteger();
   
   System.out.println(B.modPow(P, M).toString());
  }

 }

}
