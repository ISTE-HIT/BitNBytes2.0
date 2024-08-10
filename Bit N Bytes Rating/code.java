import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner as =new Scanner(System.in);
        int R = as.nextInt();
        if(R<1200)
            System.out.println("BNB-Beginner");
        else if(R<2800)
            System.out.println("BNB-Intermediate");
        else
            System.out.println("BNB-All");
    }
}