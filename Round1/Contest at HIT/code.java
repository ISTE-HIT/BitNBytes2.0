import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner as = new Scanner(System.in);
        String s= as.nextLine();
        int n = Integer.parseInt(s.substring(4)); //Integer.valueOf(s.substring(4));
        System.out.println((n>=1 && n<=349 && n!=316)? "Yes" : "No");
    }
}