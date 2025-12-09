import java.util.Random;

public class first_ex {

    public static void main(String[] args) {
        int length = 20;
        int[] numbers = new int[length];
        Random random = new Random();

        int countEven = 0, countOdd = 0;

        for (int i = 0; i < length; i++) {
            numbers[i] = random.nextInt(100);
            if (numbers[i] % 2 == 0) countEven++;
            else countOdd++;
        }

        System.out.println("Масив:");
        for (int num : numbers) System.out.print(num + " ");

        System.out.println("\nКількість парних: " + countEven);
        System.out.println("Кількість непарних: " + countOdd);
    }
}
