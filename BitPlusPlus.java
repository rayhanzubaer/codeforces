import java.util.Scanner;

public class BitPlusPlus {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int x = 0;
        while (n >= 0) {
            String str = scanner.nextLine();
            switch (str) {
                case "X++":
                case "++X":
                    ++x;
                    break;
                case "--X":
                case "X--":
                    --x;
                    break;

            }
            --n;
        }

        System.out.println(x);
    }
}
