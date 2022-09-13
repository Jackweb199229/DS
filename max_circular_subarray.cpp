#include <iostream>
using namespace std;

int maxCircularSum(int a[], int n)
{
    int i, j;
    int res = a[0];
    int curr_sum, curr_mx;
    for (i = 0; i < n; i++)
    {
        curr_mx = a[i];
        curr_sum = a[i];
        for (j = 1; j < n; j++)
        {
            int index = (i + j) % n;
            curr_sum += a[index];
            curr_sum = max(curr_mx, curr_sum);
        }
        res = max(res, curr_mx);
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
    cout << maxCircularSum(a, n) << endl;
    return 0;
}