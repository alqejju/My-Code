import java.util.Scanner;

public class soalNomor3 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        char parameter;

        System.out.print("Input Character : ");parameter = input.next().charAt(0);

        switch (parameter) {
            case 'a':
                for ( int i = 80; i <= 100;i++){
                    System.out.print(i + " ");
                }
                break;
            
            case 'b':
                for ( int i = 65; i <= 79;i++){
                    System.out.print(i + " ");
                }
                
                break;

            case 'c':
                for ( int i = 55; i <= 64;i++){
                    System.out.print(i + " ");
                }
                
                break;

            case 'd':
                for ( int i = 40; i <= 54;i++){
                    System.out.print(i + " ");
                }
                
                break;

            case 'e':
                for ( int i = 0; i <= 53;i++){
                    System.out.print(i + " ");
                }
                
                break;
        
            default:
                break;
        }
        input.close();
    }
}
