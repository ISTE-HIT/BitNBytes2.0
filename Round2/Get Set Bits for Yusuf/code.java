import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int cnt = 0;

        while (n != 0) {
            if ((n & 1) == 1) cnt++;
            n = n >> 1;
        }

        System.out.println(cnt);
    }
}
