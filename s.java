import java.util.Scanner;
import java.util.Vector;

public class s {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Integer n, q;
        n = sc.nextInt();
        q = sc.nextInt();
        Vector<Long> v = new Vector<Long>(n);
        for (int i = 0; i < n; i++) {
            Long k = sc.nextLong();
            v.add(k);
        }
        Vector<Long> cumSum = new Vector<Long>(n + 1);
        cumSum.add(0L);
        for (int i = 0; i < n; i++) {
            cumSum.add(cumSum.get(i) + v.get(i));
        }
        for (int i = 1; i <= q; i++) {

            int a, b;
            a = sc.nextInt();
            b = sc.nextInt();
            Long res = cumSum.get(b) - cumSum.get(a - 1);
            System.out.println(res);
        }
    }
}