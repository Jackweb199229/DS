#include <iostream>
using namespace std;
// NAIVE METHOD FOR MAXIMUM DIFFERENCE
int max_diff(int a[], int n)
{
    int mx = a[1] - a[0];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (mx < (a[j] - a[i]))
            { 
                mx = a[j] - a[i]; // mx = max(mx , a[j]-a[i]);
                break;
            }
        }
    }
    return mx;
}
// EFFICIENT METHOD
int mx_diff(int a[], int n)
{
    int res = a[1] - a[0];
    int minVal = a[0];
    for (int i = 0; i < n; i++)
    {
        res = max(res, a[i] - minVal);
        minVal = min(minVal, a[i]);
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // int a[7] = {2, 3, 10, 6, 4, 8, 1};
    cout << max_diff(a, n);
    cout << "\n____________________________" << endl;
    cout << mx_diff(a, n);

    return 0;
}