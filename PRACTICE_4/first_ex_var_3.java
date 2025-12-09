package PRACTICE_4;

import java.util.Scanner;

public class first_ex_var_3 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Введіть першу дату (день місяць рік): ");
        int d1 = input.nextInt();
        int m1 = input.nextInt();
        int y1 = input.nextInt();

        System.out.print("Введіть другу дату (день місяць рік): ");
        int d2 = input.nextInt();
        int m2 = input.nextInt();
        int y2 = input.nextInt();

        if (y1 == y2) {
            if (m1 == m2) {
                if (d1 == d2) {
                    System.out.println("Дати однакові.");
                } else if (d1 < d2) {
                    System.out.println("Перша дата раніша.");
                } else {
                    System.out.println("Друга дата раніша.");
                }
            } else {
                switch (m1 < m2 ? 1 : 2) {
                    case 1:
                        System.out.println("Перша дата раніша.");
                        break;
                    case 2:
                        System.out.println("Друга дата раніша.");
                        break;
                }
            }
        } else {
            switch (y1 < y2 ? 1 : 2) {
                case 1:
                    System.out.println("Перша дата раніша.");
