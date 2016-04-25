import java.util.Scanner;
import java.math.BigInteger;

class Main {
 public static void main(String[] args) {
  Scanner sc = new Scanner(System.in);
  while (sc.hasNext()) {
   BigInteger fact = BigInteger.ONE;
   BigInteger sum = BigInteger.ZERO;
   int n = sc.nextInt();
   
   for (int i = 1; i <= n; i++) {
    fact = fact.multiply(BigInteger.valueOf(i));
   }
   
   /*
   String S = fact.toString();
   int digitSum = 0;
   S.toCharArray();
   
   for (int i = 0; i < S.length(); i++) {
    digitSum += Integer.parseInt(S.substring(i, i + 1));

   }*/
   while(fact.compareTo(BigInteger.ZERO)==1)
            {
                sum=sum.add(fact.mod(BigInteger.TEN));
                fact=fact.divide(BigInteger.TEN);
            }
   
   System.out.println(sum); 
  }
 }
}