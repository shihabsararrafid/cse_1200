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
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
    }
    int cnt = 0;
    string str = "END_OF_TEXT";
    string k;
    while (cin >> k)
    {

        if (k == str)
            break;
        for (int i = 0; i < k.size(); i++)
        {
            if (k[i] >= 'A' && k[i] <= 'Z')
                k[i] = k[i] + 32;
        }
        if (k == s)
            cnt++;
    }
    cout << cnt << endl;
    baperBariJa();
}