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
ll GCD(ll a, ll b)
{
    if (b != 0)
        return GCD(b, a % b);
    return a;
}
ll LCM(ll a, ll b)
{
    return (a * b) / GCD(a, b);
}
int main()
{
    LetsGoCin();
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    ll lcm = arr[0];
    for (int i = 1; i < n; i++)
    {
        lcm = LCM(lcm, arr[i]);
    }
    cout << lcm << endl;
    baperBariJa();
}