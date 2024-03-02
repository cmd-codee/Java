import java.util.Scanner;
public class average {
    public static void main(String[] args)
    {
        boolean b = false;
        float k = 0;
        float c = 0;
        while (b != true)
        {
            Scanner scan = new Scanner(System.in);
            int i = scan.nextInt();
            if (i != 0)
            {
                c += i;
                k += 1;
            }
            else {
                break;
            }
        } 
        System.out.println(c/k); 
    }
}