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
    int n;
    cin >> n;
    vector<ll> arr1(n);
    vector<ll> arr2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i] >> arr2[i];
    }
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    int ans = 0;
    int c = 0;
    for (int i = 0, j = 0; i < n && j < n;)
    {
        if (arr1[i] < arr2[j])
        {
           // cout << arr1[i] << " " << arr2[j] << endl;
            c++;
            i++;
        }
        else
        {
            c--;
            j++;
        }
        ans = max(c, ans);
    }
    cout << ans << endl;
    baperBariJa();
}