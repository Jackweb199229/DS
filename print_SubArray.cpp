#include <bits/stdc++.h>
using namespace std;

// NAIVE SOLUTION ( print sub araay)
void sub_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << a[k] << "\n";
            }
        }
    }
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
    sub_array(a, n);

return 0;
}