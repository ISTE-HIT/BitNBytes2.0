import java.util.Scanner;

public class Solution {
    public static int BubblyMaths(int N) {
        if (N == 1) return 1;
        if (N == 2) return 2;
        if (N == 3) return 6;
        if (N == 4) return 7;
        if (N % 4 == 1) return N + 2;
        if (N % 4 == 2) return N + 2;
        if (N % 4 == 3) return N - 1;
        return N + 1;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine().trim());

        int result = BubblyMaths(n);
        System.out.println(result);
    }
}
