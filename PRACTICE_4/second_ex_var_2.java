import java.util.Scanner;

public class second_ex_var_2 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String line;

        do {
            System.out.print("Введіть текст: ");
            line = input.nextLine().trim();
        } while (line.isEmpty());

        int total = 0;
        int idx = 0;

        while (idx < line.length()) {
            char symbol = line.charAt(idx);
            if (symbol == '.' || symbol == '!' || symbol == '?') {
                total++;
            }
            idx++;
        }

        System.out.println("Кількість речень у тексті: " + total);

        input.close();
    }
}
