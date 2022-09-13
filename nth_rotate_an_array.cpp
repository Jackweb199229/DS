#include <iostream>

using namespace std;

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void d_rotate(int a[], int n, int rotate)
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
{ // int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int rotate;
    cout << "enter how many times rotate" << endl;
    cin >> rotate;
    d_rotate(a, n, rotate);
    display(a, n);

    return 0;
}
