import java.util.Scanner;

public class soalNomor2 {
    public static void main(String[] args) {
        int[] num = new int[3];
        int max = 0,min;
        Scanner input = new Scanner(System.in);

        for (int i = 0 ; i < 3;i++){
            System.out.print("Nilai Ke " + (i+1) + " ");num[i] = input.nextInt();
            if (max < num[i]) {
                max = num[i];
            }
        }
        min = num[0];
        for (int i = 0; i < 3;i++){
            if (min > num[i]) {
                min = num [i];
            }
        }
        System.out.println('\n' + "Nilai Terbesar : " + max + '\n' + "Nilai Terkecil : " + min);
        input.close();
    }
}
