import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.util.Vector;

class FastScanner {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    StringTokenizer st = new StringTokenizer("");

    String nextString() {
        while (!st.hasMoreTokens())
            try {
                st = new StringTokenizer(br.readLine());
            } catch (IOException e) {
                System.out.println(e);
            }
        return st.nextToken();
    }

    int nextInt() {
        return Integer.parseInt(nextString());
    }

    long nextLong() {
        return Long.parseLong(nextString());
    }

    double nextDouble() {
        return Double.parseDouble(nextString());
    }

    String nextLine() {
        try {
            return br.readLine();
        } catch (Exception e) {
            System.out.println("Error reading: " + e);
            return "Error";
        }
    }
}

public class s {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        // Integer n, q;

        FastScanner n = new FastScanner();
        System.out.println(n);
        // Integer q = sc.nextInt();
        // Vector<Long> v = new Vector<Long>(n);
        // for (int i = 0; i < n; i++) {
        // Long k = sc.nextLong();
        // v.add(k);
        // }
        // Vector<Long> cumSum = new Vector<Long>(n + 1);
        // cumSum.add(0L);
        // for (int i = 0; i < n; i++) {
        // cumSum.add(cumSum.get(i) + v.get(i));
        // }
        // for (int i = 1; i <= q; i++) {

        // int a, b;
        // a = sc.nextInt();
        // b = sc.nextInt();
        // Long res = cumSum.get(b) - cumSum.get(a - 1);
        // System.out.println(res);
        // }
    }
}