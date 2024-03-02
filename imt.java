import java.util.Scanner;
public class imt {
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        System.out.println("Введите свой рост:");
        int height = scan.nextInt();
        System.out.println("Введите свой вес:");
        int weight = scan.nextInt();
        float m = height/100;
	    float result = weight/(m*m);
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
            System.out.println("У вас избуточный вес");
        }
        if (result > 29.9)
        {
            System.out.println("У вас ожирение");
        }
    }
}