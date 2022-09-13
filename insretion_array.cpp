#include <iostream>
using namespace std;
int main()
{
    int a[6], i, loc, ele;
    cout << "enter the element : ";
    for (i = 0; i < 5; i++)
        cin >> a[i];

    cout << "enter the insert element : ";
    cin >> ele;
    cout << "enter the position of array  : ";
    cin >> loc;
    for (i = 4; i >= loc; i--)
    {
        a[i + 1] = a[i];
    }
    a[loc] = ele;

    cout << "after insertion array"<<endl;
    for (i = 0; i < 6; i++)
    {
        cout << a[i]<<" ";
    }

    return 0;
}
