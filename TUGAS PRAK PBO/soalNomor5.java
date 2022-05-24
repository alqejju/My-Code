import java.util.Scanner;
import java.util.Random;
import java.util.Arrays;
import java.time.Duration;
import java.time.Instant;

public class soalNomor5 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Input min Value of Array : ");int a = input.nextInt();
        System.out.print("Input max Value of Array : ");int b = input.nextInt();
        System.out.print("Input Array Length       : ");int c = input.nextInt();
        System.out.println(" ");
        array(a,b,c);
        input.close();
    }
    public static void array(int a, int b,int c) {

        Instant start = Instant.now();
        Random rand = new Random();
        int total = 0,max,min;
        int[] ab = new int[c];
        for (int i = 0; i < ab.length;i++){
            ab[i] = rand.nextInt(a,b);System.out.print(ab[i] + " ");total += ab[i];
        }
        max = Arrays.stream(ab).max().getAsInt();
        min = Arrays.stream(ab).min().getAsInt();
        System.out.println('\n');
        System.out.println("a. Jumlah Total    : " + total);
        System.out.println("b. Rata - Rata     : " + total / c);
        System.out.println("c. Nilai Tertinggi : " + max);
        System.out.println("d. Nilai Terendah  : " + min);
        Instant finish = Instant.now();
        long timeElapsed = Duration.between(start, finish).toMillis();
        System.out.println('\n' + "Time Elapsed : " + timeElapsed + " ms");
        
    }
}