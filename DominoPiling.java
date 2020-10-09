import java.util.Scanner;

public class DominoPiling {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int m = scanner.nextInt();
        int n = scanner.nextInt();

        int d;

        if (m % 2 == 0) {
            d = (m / 2) * n;
        } else {
            if (m == 1) {
                d = n / 2;
            } else {
                d = (m / 2) * n + (n / 2);
            }
        }

        System.out.println(d);
    }
}
