import java.util.Scanner;
public class calculator {
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        double num = scan.nextDouble();
        double result = Math.pow(num, 0.5);
        System.out.println(result);
    }
}