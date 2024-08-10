import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner as = new Scanner (System.in);
        int n = as.nextInt();
        int array[] = new int[n];
        int partner=0;
        for(int i=0;i<n;i++){
            array[i]=as.nextInt();
            partner^=array[i];
        }
        System.out.println(partner);
        
    }
}