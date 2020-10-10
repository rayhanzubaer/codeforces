import java.util.Scanner;

public class PetyaAndStrings {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s1 = scanner.next();
        String s2 = scanner.next();

        s1 = s1.toLowerCase();
        s2 = s2.toLowerCase();

        int res = s1.compareTo(s2);

        if (res == 0) {
            System.out.println(0);
        } else if (res > 0) {
            System.out.println(1);
        } else {
            System.out.println(-1);
        }
    }
}
