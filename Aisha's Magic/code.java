import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner as = new Scanner(System.in);
        int t= as.nextInt();
        for(int i =1; i<=t;i++){
            long n =as.nextLong();
            long ncopy=n, sum=0;
            while(ncopy!=0){
                long k = ncopy%10;
                sum+=k*k*k;
                ncopy/=10;
            }
            System.out.println((sum==n)? "Yes": "No");
        }
    }
}