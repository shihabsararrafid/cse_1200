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
    ll n, q;

    cin >> n >> q;
    vector<ll> arr(n), cum(n + 1);
    cum[0] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cum[i + 1] = cum[i] + arr[i];
    }
    for (int i = 1; i <= q; i++)
    {
        ll a, b;
        cin >> a >> b;
        cout << cum[b] - cum[a - 1] << endl;
    }
    baperBariJa();
}