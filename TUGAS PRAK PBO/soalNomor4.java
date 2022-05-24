import java.time.Duration;
import java.time.Instant;
import java.util.Scanner;

public class soalNomor4 {

    public static void main(String[] args) 
    {
        
        int a = 0,b,c;
        Scanner input = new Scanner(System.in); System.out.print("Input Max Value : ");c = input.nextInt();
        Instant start = Instant.now();
        for (int i = 0; i < c; i++) {
            //System.out.println("Perulangan Ke " + i);
            a++;b = 2;
            if (a % 2 != 0 && a > 1 || a == 2){
                
                    while (a%b != 0) {
                        b++;
                        if (a%b == 0) {
                            //System.out.println("Number Parameter " + b);break;
                        }
                    }
                    if (b >= a/2 || a <= 3) {
                        System.out.print(a + " ");
                    }
            }   
        }
        input.close();
            
        Instant finish = Instant.now();
        long timeElapsed = Duration.between(start, finish).toMillis();
        System.out.println('\n' + "Time Elapsed : " + timeElapsed + " ms");
    }  
}
