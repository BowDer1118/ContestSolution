import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        BigInteger b1i=new BigInteger(sc.next());
        char c=sc.next().charAt(0);
        BigInteger bi2=new BigInteger(sc.next());

        if(c=='+'){
            System.out.println(b1i.add(bi2));
        }
        if(c=='-'){
            System.out.println(b1i.subtract(bi2));
        }
        if(c=='*'){
            System.out.println(b1i.multiply(bi2));
        }
        if(c=='/'){
            System.out.println(b1i.divide(bi2));
        }
    }
}
