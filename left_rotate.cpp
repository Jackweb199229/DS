#include <iostream>
using namespace std;

// left Rotate an array by one
// a[] = { 1 , 2 , 3 , 4 , 5}
// after left rotate array by one
// a[] = {2 , 3 , 4 , 5 , 1}

// void left_rotate(int a[], int n){
//      int temp = a[0];
//     for (int i = 1; i < n; i++)
//     {
//         a[i - 1] = a[i];
//     }
//     a[n - 1] = temp;

//     // print an array
//    for (int i = 0; i < n; i++)
//    {
//        cout<<a[i];
//    }
// }

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // logic for left rotate an array
    int temp = a[0];
    for (int i = 1; i < n; i++)
    {
        a[i - 1] = a[i];
    }
    a[n - 1] = temp;

    // print an array
    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }
    cout<<"\n";
    // left_rotate(a, n);

    return 0;
}