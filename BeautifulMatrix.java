import java.util.Scanner;

public class BeautifulMatrix {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[][] a = new int[5][5];
        int m = -1;
        int n = -1;
        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 5; ++j) {
                a[i][j] = scanner.nextInt();
                if (a[i][j] == 1) {
                    m = i;
                    n = j;
                }
            }
        }
        System.out.println(Math.abs(m - 2) + Math.abs(n - 2));
    }
}
