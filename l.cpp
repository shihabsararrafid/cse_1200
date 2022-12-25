#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <stack>
#include <queue>
#include <set>
using namespace std;
#define LetsGoCin()                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define li long
#define ll long long
#define ull unsigned long long
#define baperBariJa() return 0
#define prntl(a) cout << a << endl
#define nl cout << endl
#define lp1(i, n) for (int i = 1; i <= n; i++)
#define lp2(i, n) for (int i = 0; i < n; i++)
#define prnt(a) cout << a
int main()
{
    LetsGoCin();
    ll n;
    cin >> n;
    ll mid = (n * (n + 1) / 2);
    if (mid % 2 != 0)
        cout << "NO\n";
    else
    {
        map<ll, ll> m;
        cout << "YES ";
        mid /= 2;
        ll k = mid / n;
        k = (1 + (k - 1) * 2);
        ll s = n;
        s += (((k - 1) / 2) * n);
       // cout << s << mid << endl;
        ll sz = k;
        if (s < mid)
        {
            // cout << (mid - s) << " ";
            sz++;
            m[mid - s] = -1;
        }
        cout << sz << " " << n << " ";
        // k--;
        m[n] = -1;
        for (int i = 1, j = n - 1; i <= k - 1; i += 2, j--)
        {
            cout << j << " " << (n - j) << " ";
            m[j] = -1;
            // s += j;
            //  s += (n - j);

            m[n - j] = -1;
        }
        if (s < mid)
        {
            cout << (mid - s) << " ";
            // k++;
            // m[mid - s] = -1;
        }
        cout << "\n";
        cout << (n - sz) << " ";
        for (int i = 1; i < n; i++)
        {
            if (m[i] != -1)
                cout << i << " ";
        }
        cout << endl;
    }
    baperBariJa();
}