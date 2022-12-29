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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        double l1 = log2(n);
        ll l2 = log2(n);
        if (n % 4 == 0)
        {
            cout << "YES\n";
            for (int i = 2; i <= n; i += 2)
                cout << i << " ";
            ll cn = 0;
            for (int i = 1; i < n - 2; i += 2)
            {
                cn++;
                cout << i << " ";
            }
            cn++;
            cout << n - 1 + cn << endl;
        }
        else
            cout << "NO\n";
        // cout << l1 << " " << l2 << endl;
    };
    baperBariJa();
}