#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }
   cout <<"\nAfter coppy with reverse order "<<endl;
    for (int i=n-1; i>=0; i--)
    {
        b[i] = a[i];
        cout<<b[i]<<" ";
    }
    return 0;
}