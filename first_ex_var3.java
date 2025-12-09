import java.util.Scanner;

public class first_ex_var3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Введіть першу дату (день місяць рік): ");
        int day_first = scanner.nextInt();
        int month_first = scanner.nextInt();
        int year_first = scanner.nextInt();
        System.out.print("Введіть другу дату (день місяць рік): ");
        int day_second = scanner.nextInt();
        int month_second = scanner.nextInt();
        int year_second = scanner.nextInt();
        if (year_first == year_second) {
            if (month_first == month_second) {

                if (day_first == day_second) {
                    System.out.println("Дати однакові.");
                } else if (day_first < day_second) {
                    System.out.println("Перша дата раніша.");
                } else {
                    System.out.println("Друга дата раніша.");
                }
            } else {

                switch (month_first < month_second ? 1 : 2) {
                    case 1:
                        System.out.println("Перша дата раніша.");
                        break;
                    case 2:
                        System.out.println("Друга дата раніша.");
                        break;
                }
            }
        } else {

            switch (year_first < year_second ? 1 : 2) {
                case 1:
                    System.out.println("Перша дата раніша.");
                    break;
                case 2:
                    System.out.println("Друга дата раніша.");
                    break;
            }
        }
        scanner.close();

    }
}
