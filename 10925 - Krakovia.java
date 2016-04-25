import java.util.Scanner;
import java.math.BigInteger;

class Main {

 public static void main(String[] args) {
  // TODO Auto-generated method stub
  Scanner sc = new Scanner(System.in);
  int Cases = 0;
  int N, F;
  while (true) {
   N = sc.nextInt();
   F = sc.nextInt();

   if (N == 0 && F == 0)
    break;

   BigInteger sum = BigInteger.ZERO;
   for(int i=1;i<=N;i++){
    sum = sum.add(sc.nextBigInteger());
   }
   
   System.out.println("Bill #" + ++Cases + " costs " + sum
     + ": each friend should pay "
     + sum.divide(BigInteger.valueOf(F)));
   System.out.println();
  }

 }

}