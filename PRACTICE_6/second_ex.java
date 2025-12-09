import java.util.Scanner;

public class second_ex {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Введіть кількість кутів: ");
        int sides = input.nextInt();

        int[] angles = new int[sides];
        int total = 0;

        System.out.println("Введіть " + sides + " кутів:");
        for (int i = 0; i < sides; i++) {
            angles[i] = input.nextInt();
            total += angles[i];
        }

        int expectedSum = 180 * (sides - 2);

        if (total == expectedSum)
            System.out.println("Такий багатокутник може існувати.");
        else
            System.out.println("Багатокутник НЕ може існувати.");

        input.close();
    }
}
