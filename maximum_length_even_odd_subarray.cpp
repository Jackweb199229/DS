#include <iostream>
using namespace std;

// Naive method
int max_Even_odd(int a[] , int n){
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        int curr = 1;
        for (int j = i+1; j < n; j++)
        {
           if ((a[j] % 2 == 0 && a[j-1] % 2 != 0) || (a[j] % 2 != 0 && a[j-1] % 2 == 0)) 
           {
               curr ++;
           }
           else{
               break;
           }
           
        }
        res = max(res,curr);
        
    }
    return res;
    
}

// efficient method
int maxEvenOdd(int a[], int n)
{
    int res = 1, curr = 1;
    for (int i = 1; i < n; i++)
    {
        if ((a[i] % 2 == 0 && a[i-1] % 2 != 0) ||
          (a[i] % 2 != 0 && a[i-1] % 2 == 0))
        {
            curr++;
            res = max(res, curr);
        }
        else
            curr = 1;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    int *a;
    a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<<"naive method time complexity of O(n^2)"<<endl;
    cout << max_Even_odd(a, n) << " ";
    cout<<endl;
    cout<<"efficient method time complexity of O(n)"<<endl;
    cout << maxEvenOdd(a, n) << " ";
    cout<<endl;
    return 0;
}