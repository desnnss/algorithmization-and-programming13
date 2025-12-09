public class fourth_ex {
    public static void main(String[] args) {
        double[] sineValues = new double[91];

        for (int angle = 0; angle <= 90; angle++) {
            sineValues[angle] = Math.sin(Math.toRadians(angle));
        }

        System.out.println("Таблиця синусів 0–90°:");

        for (int angle = 0; angle <= 90; angle++) {
            System.out.printf("%.4f ", sineValues[angle]);
            if ((angle + 1) % 10 == 0) System.out.println();
        }
    }
}
