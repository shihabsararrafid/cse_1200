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
#define mod 1000000007
ll Res(ll m, ll n)
{
    ll k = m;
    ll res = 1;
    while (n > 0)
    {
        if (n & 1)
            res = res * k % mod;
        n >>= 1;
        k = k * k % mod;
    }
    return res % mod;
}
int main()
{
    LetsGoCin();

    ll m, n;
    cin >> m >> n;
    ll ans = Res(m, n);
    cout << ans << endl;

    baperBariJa();
}