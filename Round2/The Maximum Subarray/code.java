import java.io.*;
import java.util.*;

public class Solution {

    public static List<Integer> maxSubarray(List<Integer> arr) {
        int maxi = Integer.MIN_VALUE;
        int maxis = Integer.MIN_VALUE;
        int sum = 0;
        
        // Find maximum subarray sum using Kadane's algorithm
        for (int i = 0; i < arr.size(); i++) {
            sum += arr.get(i);
            maxi = Math.max(sum, maxi);
            if (sum < 0) sum = 0;
        }
        
        if (maxi < 0) return Arrays.asList(maxi, maxi);
        
        sum = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr.get(i) < 0) continue;
            sum += arr.get(i);
            maxis = Math.max(sum, maxis);
        }
        
        return Arrays.asList(maxi, maxis);
    }

    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int t = Integer.parseInt(bufferedReader.readLine().trim());

        for (int tItr = 0; tItr < t; tItr++) {
            int n = Integer.parseInt(bufferedReader.readLine().trim());

            List<Integer> arr = new ArrayList<>();
            String[] arrItems = bufferedReader.readLine().split(" ");

            for (int i = 0; i < n; i++) {
                int arrItem = Integer.parseInt(arrItems[i]);
                arr.add(arrItem);
            }

            List<Integer> result = maxSubarray(arr);

            for (int i = 0; i < result.size(); i++) {
                bufferedWriter.write(String.valueOf(result.get(i)));

                if (i != result.size() - 1) {
                    bufferedWriter.write(" ");
                }
            }

            bufferedWriter.newLine();
        }

        bufferedReader.close();
        bufferedWriter.close();
    }
}
