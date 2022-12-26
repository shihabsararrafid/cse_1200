#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
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
    for (ll i = 1; i <= t; i++)
    {
        cout << "Case " << i << ": ";
        string str;
        ll n;
        cin >> str >> n;
        ll len = str.size();
        ll rem;
        ll num = 0;
        for (ll i = 0; i < len; i++)
        {
            if (str[i] == '-')
                continue;
            num = (num * 10) + (str[i] - '0');
            if (num >= n)
            {
                num %= n;
            }
        }
        if (num == 0)
            cout << "divisible\n";
        else
            cout << "not divisible\n";
        // cout << num << endl;
    }
    baperBariJa();
}