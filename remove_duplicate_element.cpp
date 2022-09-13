#include <iostream>
using namespace std;

// logic of remove duplication element 
// NAIVE SOLUTION
int duplicate(int a[], int n)
{
    int b[n];
    b[0] = a[0];
    int size = 1;
    for (int i = 1; i < n; i++)
    {
        if (b[size - 1] != a[i])
        {
            b[size] = a[i];
            size++;
        }
    }

    for (int i = 0; i < size; i++)
    {
        a[i] = b[i];
        cout << a[i] << " ";
    }
    return size;
}

//  EFFICIENT SOLUTION

// int remduplicate(int a[], int n){
//     int res = 1;
//     for (int i = 1; i < n; i++)
//     {
//         if(a[res-1] != a[i]){
//            a[res] = a[i];
//            res ++;
//         }
//     }

//     return res;
   
    
    
// }


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout << "\nBefore duplicate array and size is "<<n << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\nAfter remove duplicate array is ";

    cout << "\nSize of array is " << duplicate(a, n) << endl;

    // cout<<"\n__________Efficient Solution___________"<<endl;
    // cout<<"size "<<remduplicate(a,n);

    return 0;
}