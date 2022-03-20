import java.util.Scanner;

public class maxValue {
    public static void main(String[] args) {
        int[] num = new int[3];
        int max = 0;
        Scanner input = new Scanner(System.in);

        for (int i = 0 ; i < 3;i++){
            System.out.print("Nilai Ke " + (i+1) + " ");num[i] = input.nextInt();
            if (max < num[i]) {
                max = num[i];
            }
        }
        System.out.println('\n' + "Nilai terbesar : " + max);
        input.close();
    }
}
