import java.util.Scanner;

public class third_ex_varr_2 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Введіть число N: ");
        int limit = input.nextInt();

        System.out.println("Прості числа від 1 до " + limit + ":");

        for (int num = 2; num <= limit; num++) {
            boolean prime = true;

            for (int div = 2; div <= num / 2; div++) {
                if (num % div == 0) {
                    prime = false;
                    break;
                }
            }

            if (prime) {
                System.out.print(num + " ");
            }
        }

        input.close();
    }
}
