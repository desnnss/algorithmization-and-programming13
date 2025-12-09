import java.util.Scanner;

public class Task_5 {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        System.out.print("Введите размер квадратной матрицы (n): ");
        int size = input.nextInt();

        int[][] original = new int[size][size];

        for (int r = 0; r < size; r++) {
            for (int c = 0; c < size; c++) {
                original[r][c] = (int)(Math.random() * 101) - 50;
            }
        }

        System.out.println("\nИсходная матрица:");
        printMatrix(original);

        int[][] swapped = new int[size][size];
        for (int r = 0; r < size; r++) {
            for (int c = 0; c < size; c++) {
                swapped[c][r] = original[r][c];
            }
        }

        System.out.println("\nТранспонованая матриця:");
        printMatrix(swapped);

        input.close();
    }

    public static void printMatrix(int[][] arr) {
        for (int[] row : arr) {
            for (int val : row) {
                System.out.printf("%5d", val);
            }
            System.out.println();
        }
    }
}
