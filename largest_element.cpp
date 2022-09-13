#include <iostream>
using namespace std;

int greatest(int a[], int size)
{
    int res = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] > a[res])
        {
            res = a[i];
        }
    }
    return res;
}


int main()
{
    int n;
    cin >> n;
    int a[n], max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; // input array
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        { // logic larger element
            max = a[i];
        }
    }
    cout << "largest element of array is " << max;

    // function calling
    // cout << "\n largest element with function...." << endl;
    // cout << "largest element of array is " << greatest(a, n)<<endl;

    return 0;
}