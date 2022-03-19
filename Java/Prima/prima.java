import java.util.Scanner;

public class prima {

    public static void main(String[] args) 
    {
        int a = 0,b,c;
        Scanner input = new Scanner(System.in); System.out.print("Input Max Value : ");c = input.nextInt();
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
                        System.out.print(a+" ");
                    }
            }   
        }
        input.close();
    }  
}
