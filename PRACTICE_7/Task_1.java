import java.util.Scanner;

public class Task_1 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Введите количество строк (n >= 1): ");
        int rows = input.nextInt();
        if (rows < 1) {
            System.out.println("n должно быть >= 1");
            return;
        }

        int mid = (rows + 1) / 2;

        int[][] pyramid = new int[rows][];
        int val = 1;
        for (int i = 0; i < rows; i++) {
            int len = (i < mid) ? (i + 1) : (rows - i);
            pyramid[i] = new int[len];
            for (int j = 0; j < len; j++) {
                pyramid[i][j] = val++;
            }
        }

        int maxLen = mid;

        System.out.println("\nОбычный порядок (пирамидой):");
        printPyramid(pyramid, maxLen);

        System.out.println("\nОбратный порядок (пирамидой):");
        int[][] reversed = reverseRows(pyramid);
        printPyramid(reversed, maxLen);

        input.close();
    }

    private static void printPyramid(int[][] arr, int maxLen) {
        for (int i = 0; i < arr.length; i++) {
            int len = arr[i].length;
            int spaces = (maxLen - len) * 2;
            for (int s = 0; s < spaces; s++) System.out.print(" ");
            for (int j = 0; j < len; j++) {
                System.out.print(arr[i][j]);
                if (j != len - 1) System.out.print(" ");
            }
            System.out.println();
        }
    }

    private static int[][] reverseRows(int[][] src) {
        int n = src.length;
        int[][] out = new int[n][];
        for (int i = 0; i < n; i++) {
            out[i] = src[n - 1 - i];
        }
        return out;
    }
}
