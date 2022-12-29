import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;
import java.util.Vector;

public class t {
    public static void main(String[] args) {
        Integer n, q;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        q = sc.nextInt();
        // Vector<Long> v = new Vector<Long>(n);
        // long [] v1 = new long(n+1);
        long[] v = new long[n];
        for (int i = 0; i < n; i++) {

            v[i] = sc.nextLong();
            // = k;
        }
        // Vector<Integer> c = new Vector<Integer>(n + 1);
        long[] c = new long[n + 2];
        // for (int i = 0; i <= n; i++) {

        // c[i] = 0;
        // }
        for (int i = 1; i <= q; i++) {

            Integer a, b;
            a = sc.nextInt();
            b = sc.nextInt();
            c[a - 1]++;
            c[b]--;
            // c.set(a - 1, c.get(a - 1) + 1);
            // c.set(b, c.get(b) - 1);
        }
        int sum = 0;
        Long k = 0L;
        Arrays.sort(v);
        // Vector<Integer> l = new Vector<Integer>(n + 1);
        int[] l = new int[n];
        for (int i = 0; i < n; i++) {
            sum += c[i];
            l[i] = sum;
            // k+=(v.get(i))
            // System.out.println(sum);
        }
        Arrays.sort(l);
        for (int i = n - 1; i >= 0; i--) {
            // System.out.println(l[i]);
            k += (l[i] * v[i]);
        }
        System.out.println(k);
    }
}

