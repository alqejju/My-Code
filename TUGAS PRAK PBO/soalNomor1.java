import java.util.Scanner;
public class soalNomor1 {
    public static void main(String[] args) {
        int jari;

        Scanner input = new Scanner(System.in);
        System.out.println("Input Jari-Jari Lingkaran : ");jari = input.nextInt();
        System.out.println('\n' + "Keliling : " + (Math.PI*(2*jari)) + '\n' +
        "Luas : " + (Math.PI*Math.pow(jari, 2)));
        input.close();
    }
}
