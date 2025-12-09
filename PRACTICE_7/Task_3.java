import java.util.Scanner;

public class Task_3 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int[][] mat = new int[5][5];

        System.out.println("Введите элементы матрицы 5x5:");
        for (int r = 0; r < 5; r++) {
            for (int c = 0; c < 5; c++) {
                mat[r][c] = input.nextInt();
            }
        }

        int detValue = determinant(mat);
        System.out.println("\nВведенная матрица:");
        printMatrix(mat);
        System.out.println("\nВизначник матриці = " + detValue);

        input.close();
    }

    public static int determinant(int[][] matrix) {
        int n = matrix.length;
        if (n == 1) return matrix[0][0];
        if (n == 2) return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];

        int det = 0;
        for (int col = 0; col < n; col++) {
            det += matrix[0][col] * cofactor(matrix, 0, col);
        }
        return det;
    }

    public static int cofactor(int[][] matrix, int row, int col) {
        return (int) Math.pow(-1, row + col) * determinant(minor(matrix, row, col));
    }

    public static int[][] minor(int[][] matrix, int row, int col) {
        int n = matrix.length;
        int[][] out = new int[n - 1][n - 1];
        int rr = 0;
        for (int r = 0; r < n; r++) {
            if (r == row) continue;
            int cc = 0;
            for (int c = 0; c < n; c++) {
                if (c == col) continue;
                out[rr][cc] = matrix[r][c];
                cc++;
            }
            rr++;
        }
        return out;
    }

    public static void printMatrix(int[][] matrix) {
        for (int[] row : matrix) {
            for (int val : row) {
                System.out.printf("%4d", val);
            }
            System.out.println();
        }
    }
}
