#include <bits/stdc++.h>
using namespace std;
// NAIVE SOLUTION (O(n*n))
int max_subArray(int arr[], int n)
{
    int res = arr[0];
    for (int i = 0; i < n; i++)
    {
        int curr = 0;
        for (int j = i; j < n; j++)
        {
            curr = curr + arr[i];
            res = max(res, curr);
        }
    }
    return res;
}

// efficient solution

int mx_subarray(int arr[], int n)
{
    int res = arr[0];
    int maxEnding = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(res, maxEnding);
    }
    return res;
}

int main()
{
    // 1,-2,3,-1,2   o/p = 4
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << max_subArray(arr, n) << endl;
    cout << mx_subarray(arr, n) << endl;

    return 0;
}