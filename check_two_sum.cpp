#include <bits/stdc++.h>
using namespace std;
// Two pointer technique based solution to find
// if there is a pair in A[0..N-1] with a given sum.
bool isPairSum(int A[], int N,int  X)
{
    // represents first pointer
    int i = 0;

    // represents second pointer
    int j = N - 1;

    while (i < j)
    {

        // If we find a pair
        if (A[i] + A[j] == X)
            return true;

        // If sum of elements at current
        // pointers is less, we move towards
        // higher values by doing i++
        else if (A[i] + A[j] < X)
            i++;

        // If sum of elements at current
        // pointers is more, we move towards
        // lower values by doing j--
        else
            j--;
    }
    return false;
}
int main()
{
    int n, x;
    cin >> n >> x;
    int arr[n + 2];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    bool flag = isPairSum(arr, n, x);
    if (flag == true)
    {
        cout << "exist the pair of index" << endl;
    }
    else
    {
        cout << "Pair is not existed" << endl;
    }
}