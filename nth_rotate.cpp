#include <iostream>
using namespace std;

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void nth_rotation(int a[], int n, int rotate)
{
    int temp;
    while (rotate)
    {
        temp = a[0];
        for (int i = 1; i < n; i++)
        {
            a[i - 1] = a[i];
        }
        a[n - 1] = temp;
        rotate--;
    }
}

int main()
{
    //  1 2 3 4 5 = rotate 3 times = 4 5 1 2 3
    int n, rotate;
    cout << "enter the size of number : ";
    cin >> n;
    cout<<endl;
    int a[n];
    cout << "enter the element of number : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<<endl;
    cout << "How many times of rotate : ";
    cin >> rotate;
    cout<<endl;
    nth_rotation(a, n, rotate);
    display(a, n);
    return 0;
}