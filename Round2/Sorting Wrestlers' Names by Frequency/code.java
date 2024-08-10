import java.io.*;
import java.util.*;

class Node {
    int freq;
    char ch;

    Node(int freq, char ch) {
        this.freq = freq;
        this.ch = ch;
    }
}

class Compare implements Comparator<Node> {
    public int compare(Node a, Node b) {
        if (a.freq == b.freq) {
            return Character.compare(a.ch, b.ch);
        }
        return Integer.compare(b.freq, a.freq);
    }
}

public class Solution {

    public static String sortByFrequency(String s) {
        if (s.length() == 0) return s;

        // Frequency map
        Map<Character, Integer> mp = new HashMap<>();
        for (char c : s.toCharArray()) {
            mp.put(c, mp.getOrDefault(c, 0) + 1);
        }

        // Priority queue to sort characters by frequency and then lexicographically
        PriorityQueue<Node> pq = new PriorityQueue<>(new Compare());
        for (Map.Entry<Character, Integer> entry : mp.entrySet()) {
            pq.offer(new Node(entry.getValue(), entry.getKey()));
        }

        // Construct the resulting string
        StringBuilder ans = new StringBuilder();
        while (!pq.isEmpty()) {
            Node node = pq.poll();
            ans.append(String.valueOf(node.ch).repeat(node.freq));
        }

        return ans.toString();
    }

    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s = bufferedReader.readLine();
        String result = sortByFrequency(s);

        bufferedWriter.write(result);
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}
