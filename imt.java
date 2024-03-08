import java.util.Scanner;
public class imt {
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        System.out.println("Введите свой рост:");
        double height = scan.nextInt();
        System.out.println("Введите свой вес:");
        double weight = scan.nextInt();
        double m = height/100;
	    double result = weight/(m*m);
        if (result < 18.5)
        {
            System.out.println("У вас недостаточный вес");
        }
        if (result > 18.5 && result < 24.9)
        {
            System.out.println("У вас нормальный вес");
        }
        if (result > 24.9 && result < 29.9)
        {
            System.out.println("У вас избыточный вес");
        }
        if (result > 29.9)
        {
            System.out.println("У вас ожирение");
        }
    }
}
