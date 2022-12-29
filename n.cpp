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
string getBinary(ll t)
{
    string str;
    while (t > 0)
    {
        int rem = t % 2;
        char c = '0' + rem;
        str.push_back(c);
        t /= 2;
    }
    reverse(str.begin(), str.end());
    return str;
}
int main()
{
    LetsGoCin();
    ll t;
    cin >> t;
    string res = getBinary(t);
    int ans = 0;
    for (int i = 0; i < res.size(); i++)
    {
        if (res[i] == '1')
        {
            ans++;
        }
    }
    cout << ans << endl;
    baperBariJa();
}