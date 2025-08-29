#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n; // number of elements of the array
    cin >> n;

    int k; // constant number of consecutive elements
    cin >> k;

    int arr[n + 3];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int l = 0;
    int r = k - 1;

    ll sum = 0;

    for (int i = 0; i <= r; i++)
    {
        sum += arr[i];
    }

    ll mx = sum;
    while (r < n - 1)
    {
        cout << sum << endl;
        sum -= arr[l];
        l++;
        r++;
        sum += arr[r];

        mx = max(sum, mx);
    }

    cout << mx << endl;
}
