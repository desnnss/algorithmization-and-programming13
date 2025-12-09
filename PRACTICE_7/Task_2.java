import java.util.Scanner;

public class Task_2 {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        System.out.print("Введите количество строк: ");
        int numRows = input.nextInt();
        System.out.print("Введите количество столбцов: ");
        int numCols = input.nextInt();

        double[][] matrix = new double[numRows][numCols];

        for (int r = 0; r < numRows; r++) {
            for (int c = 0; c < numCols; c++) {
                matrix[r][c] = Math.random() * 100;
            }
        }

        for (int r = 0; r < numRows; r++) {
            for (int c = 0; c < numCols; c++) {
                if (r % 2 != 0 || c % 2 != 0) {
                    matrix[r][c] = Math.sqrt(matrix[r][c]);
                }
            }
        }

        System.out.println("\nРезультат:");
        for (int r = 0; r < numRows; r++) {
            for (int c = 0; c < numCols; c++) {
                System.out.printf("%.2f\t", matrix[r][c]);
            }
            System.out.println();
        }

        input.close();
    }
}
