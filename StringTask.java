import java.util.Scanner;

public class StringTask {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		String str = scanner.nextLine();
		str = str.toLowerCase();
		
		for (int i = 0; i < str.length(); ++i) {
			char c = str.charAt(i);
			if (c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i') {
				continue;
			}
			System.out.print("." + c);
		}
	} 
}
