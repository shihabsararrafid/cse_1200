import java.util.Scanner;
import java.util.Vector;

public class s {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Integer n, q;
        n = sc.nextInt();
        q = sc.nextInt();
        long[] v = new long[n];
        // Vector<Long> v = new Vector<Long>(n);
        for (int i = 0; i < n; i++) {
            v[i] = sc.nextLong();

        }
        // Vector<Long> cumSum = new Vector<Long>(n + 1);
        long[] cumSum = new long[n + 1];
        cumSum[0] = 0L;
        for (int i = 0; i < n; i++) {
            // cumSum.add(cumSum.get(i) + v[i]);
            cumSum[i + 1] = cumSum[i] + v[i];
        }
        for (int i = 1; i <= q; i++) {

            int a, b;
            a = sc.nextInt();
            b = sc.nextInt();
            Long res = cumSum[b] - cumSum[a - 1];
            System.out.println(res);
        }
    }
}