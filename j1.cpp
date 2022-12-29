#include <iostream>
#include <algorithm>
using namespace std;
int binary(long long int arr[], long long int n, long long int x)
{
    long long int i, j, temp;
    long long int high, low, mid;
    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (high + low) / 2;
        if (arr[mid] == x)
        {
            
            return 1;
          //  break;
        }
        if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return 0;
}
int main()
{
    long long int n, m, i, count = 0, x, arr[100500];
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cin >> m;
    for (i = 0; i < m; i++)
    {
        cin >> x;
       // cout << binary(arr, n, x) << endl;
        count = count + binary(arr, n, x);
    }

    cout << count << endl;
}