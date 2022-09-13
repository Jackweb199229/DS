#include <iostream>
using namespace std;

// CHECK IF ARRAY IS SORTED  OR NOT
// NAIVE SOLUTION
bool is_sorted(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (a[j] < a[i])
                return false;
        }
    }
    return true;
}

// SORTED ARRAY OR NOT ,EFFIECIENT SOLUTION
int Is_sorted(int a[], int n){
    for (int i = 1; i < n; i++)
    {
       if(a[i] > a[i-1])
        return true;
    }
    return false;
    
}



int main()
{
    int n;
    cin >> n;
    int a[n], temp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // sorted array
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "after sorted array is ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }

    cout << "\nis sorted array or not " << is_sorted(a, n) << endl;
    cout<<"\n sorted array or not ";
    cout<<Is_sorted(a,n);
    return 0;
}