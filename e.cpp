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
    int t;
    cin >> t;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
    int nd = 0;
    string str;
    cin >> str;
    for (int i = 0; i < t; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            cnt1++;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            cnt2++;
        else if (str[i] >= '0' && str[i] <= '9')
            cnt3++;
        else
        {
            cnt4++;
        }
    }
    if (cnt1 == 0)
        nd++;
    if (cnt2 == 0)
        nd++;
    if (cnt3 == 0)
        nd++;
    if (cnt4 == 0)
        nd++;
    cout << max(6 - t, nd) << endl;
    baperBariJa();
}