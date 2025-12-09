import java.util.*;

public class fifth_ex {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Random random = new Random();

        System.out.print("Введіть розмір масиву: ");
        int size = input.nextInt();

        int[] numbers = new int[size];

        for (int i = 0; i < size; i++)
            numbers[i] = random.nextInt(100);

        System.out.println("Масив:");
        System.out.println(Arrays.toString(numbers));

        System.out.print("Перевірити на (1 - зростання, 2 - спадання): ");
        int choice = input.nextInt();

        boolean isOrdered = true;

        if (choice == 1) {
            for (int i = 0; i < size - 1; i++)
                if (numbers[i] > numbers[i + 1]) isOrdered = false;

            System.out.println(isOrdered ? "Масив зростає." : "Масив НЕ зростає.");
        }
        else if (choice == 2) {
            for (int i = 0; i < size - 1; i++)
                if (numbers[i] < numbers[i + 1]) isOrdered = false;

            System.out.println(isOrdered ? "Масив спадає." : "Масив НЕ спадає.");
        }
        else {
            System.out.println("Невірний вибір.");
        }

        input.close();
    }
}
