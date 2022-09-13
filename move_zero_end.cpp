#include <iostream>
using namespace std;
//  NAIVE SOLUTION
void move_zero(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] != 0)
                {
                    swap(a[i], a[j]);
                }
            }
        }
        cout << a[i];
    }
}

// Efficient solution

void move_zero_end(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            swap(a[i], a[count]);
            count++;
        }
          cout<<a[i];
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
    move_zero(a, n);

    cout<<"\n";
    move_zero_end(a,n);
    return 0;
}