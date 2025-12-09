import java.util.Scanner;

public class Task_4 {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        System.out.print("Введите размер матрицы (n): ");
        int size = input.nextInt();

        double[][] matrix = new double[size][size];

        for (int r = 0; r < size; r++) {
            for (int c = 0; c < size; c++) {
                matrix[r][c] = Math.random() * 100;
            }
        }

        System.out.println("\nИсходная матрица:");
        printMatrix(matrix);

        System.out.print("\nВведите номер строки для минора (от 1 до " + size + "): ");
        int rowIndex = input.nextInt() - 1;

        System.out.print("Введите номер столбца для минора (от 1 до " + size + "): ");
        int colIndex = input.nextInt() - 1;

        double[][] resultMinor = minor(matrix, rowIndex, colIndex);

        System.out.println("\nМинор матрицы (без строки " + (rowIndex + 1) +
                " и столбца " + (colIndex + 1) + "):");
        printMatrix(resultMinor);

        input.close();
    }

    public static double[][] minor(double[][] arr, int delRow, int delCol) {
        int n = arr.length;
        double[][] out = new double[n - 1][n - 1];

        int rr = 0;
        for (int i = 0; i < n; i++) {
            if (i == delRow) continue;
            int cc = 0;
            for (int j = 0; j < n; j++) {
                if (j == delCol) continue;
                out[rr][cc] = arr[i][j];
                cc++;
            }
            rr++;
        }
        return out;
    }

    public static void printMatrix(double[][] arr) {
        for (double[] row : arr) {
            for (double val : row) {
                System.out.printf("%8.2f", val);
            }
            System.out.println();
        }
    }
}
