import java.util.Scanner;
import java.util.Formatter;

public class Prac_3 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Введіть ціле число: ");
        int numberInt = input.nextInt();

        System.out.print("Введіть число з плаваючою точкою: ");
        double floatNum = input.nextDouble();

        input.nextLine();
        System.out.print("Введіть строку: ");
        String textData = input.nextLine();

        System.out.print("Введіть логічне значення (true/false): ");
        boolean flag = input.nextBoolean();

        System.out.println("\n--- Вивід даних у різних форматах ---\n");

        System.out.printf("1) Ціле число в десятковій системі: %d%n", numberInt);
        System.out.printf("2) Ціле число в шістнадцятковій системі: %x%n", numberInt);
        System.out.printf("3) Ціле число в вісімковій системі: %o%n", numberInt);
        System.out.printf("4) Число з плаваючою точкою (2 знаки після коми): %.2f%n", floatNum);
        System.out.printf("5) Число в науковому форматі: %e%n", floatNum);
        System.out.printf("6) Строка з шириною 15: %15s%n", textData);
        System.out.printf("7) Обрізана строка до 5 символів: %.5s%n", textData);
        System.out.printf("8) Логічне значення: %b%n", flag);

        String mixedOutput = String.format(
                "9) Комбінований формат: int=%d, double=%.1f, bool=%b",
                numberInt, floatNum, flag
        );
        System.out.println(mixedOutput);

        Formatter outFmt = new Formatter();
        outFmt.format("10) Використання Formatter: str='%s', hex int=%x", textData, numberInt);
        System.out.println(outFmt);
        outFmt.close();

        input.close();
    }
}
