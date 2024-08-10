import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner as = new Scanner(System.in);
        int n = as.nextInt();
        System.out.println((n%2==0)? n : (2*n));
    }
}