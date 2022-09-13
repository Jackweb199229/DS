#include <iostream>
using namespace std;
// serching element in the array
// linear search
void dispal_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
}

int li_search(int a[], int size, int x)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] == x)
        {
            return i;
        }
        
    }
    return -1;
}

int main()
{
    int size;
    cin >> size;
    int a[50], x;
    cout << "enter the element of array " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "enter the element what you want to search : ";
    cin >> x;
    cout<<li_search(a, size, x);

    return 0;
}