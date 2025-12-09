import java.util.*;

public class third_ex {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Random random = new Random();

        System.out.print("Введіть розмір масиву: ");
        int size = input.nextInt();

        int[] numbers = new int[size];

        for (int i = 0; i < size; i++) {
            numbers[i] = random.nextInt(50);
        }

        System.out.println("Початковий масив:");
        System.out.println(Arrays.toString(numbers));

        System.out.print("Введіть значення для пошуку: ");
        int target = input.nextInt();

        System.out.print("Введіть нове значення: ");
        int replacement = input.nextInt();

        boolean replaced = false;

        for (int i = 0; i < size; i++) {
            if (numbers[i] == target) {
                numbers[i] = replacement;
                replaced = true;
            }
        }

        if (replaced)
            System.out.println("Значення замінено.");
        else
            System.out.println("Значення не знайдено.");

        System.out.println("Новий масив:");
        System.out.println(Arrays.toString(numbers));

        input.close();
    }
}
