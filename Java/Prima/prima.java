import java.time.Duration;
import java.time.Instant;
import java.util.Scanner;

public class prima {

    public static void main(String[] args) 
    {
        int a = 0,b,c,total = 0;
        Scanner input = new Scanner(System.in); System.out.print("Input Max Value : ");c = input.nextInt();
        Instant start = Instant.now();
        for (int i = 0; i < c; i++) {
            a++;b = a -1;
            if (a % 2 != 0 && a > 1 || a == 2){
                //System.out.print(a + " ");
                    while (a%b != 0) {
                        b = b-1;
                        if (a%b == 0) {
                            //System.out.println("Number Parameter " + b);break;
                        }
                    }
                    if (b == 1) {
                        //System.out.print(a+" ");
<<<<<<< HEAD
                        total++;
=======
>>>>>>> 12e52f45075e3fdbf9dd6a26b588e35fc0eb6ff7
                    }
            }   
        }
        input.close();

        Instant finish = Instant.now();
        long timeElapsed = Duration.between(start, finish).toMillis();
        System.out.println("Total Prime Number = " + total);
        System.out.println(" ");
        System.out.println("Time Elapsed : " + timeElapsed + " ms");
    }  
}
