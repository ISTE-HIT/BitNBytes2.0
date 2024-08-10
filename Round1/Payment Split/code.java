import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner as = new Scanner(System.in);
        int K = as.nextInt();
        int S = as.nextInt();
        int count=0;
        for(int X=0; X<=K;X++)
            for(int Y=0;Y<=K;Y++){
                int Z=S-X-Y;
                if(Z>=0 && Z<=K )
                    count++;
            }
        System.out.println(count);
        
    }
}
