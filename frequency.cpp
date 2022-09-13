#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[12] = {1, 2, 1, 2, 1, 2, 3, 4, 3, 4, 3, 4};
    for (int i = 0; i < 12; i++)
    {
        cout << a[i];
    }

    int freq = 1;
    int temp = a[0];
    for (int i = 0; i < 12; i++)
    {
        if (a[i] == temp)
        {
            freq++;
        }
        else
        {
            a[i]++;
        }
    }
    cout << "\n"
         << freq << endl;

    return 0;
}