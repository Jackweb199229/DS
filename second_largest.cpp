#include <iostream>
using namespace std;

// second largest element efficient approach 
int second_largest(int a[], int n){
    int res = -1, largest = 0;
    for(int i=1; i<n; i++){
        if(a[i] > a[largest]){
            res = largest;
            largest = i;
        }
        else if (a[i] != a[largest]){
            if(res == -1 || a[i] > a[res]){
                    res = i;
            }
        }
    }
    return res;
}


int sec_largest(int a[], int n)
{
    int seclargest = 0, largest = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            seclargest = largest;
            largest = a[i];
        }
        else if (a[i] > seclargest)
        {
            seclargest = a[i];
        }
    }
    return seclargest;
}

int main()
{
    int n;
    cin >> n;
    int a[n], largest = 0, seclargest = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            seclargest = largest;
            largest = a[i];
        }
        else if (a[i] > seclargest)
        {
            seclargest = a[i];
        }
    }

    cout << "\nsecond largest element is " << seclargest << endl;

    cout<<"2nd largest element "<<sec_largest(a,n)<<endl;

    cout<<"\nIndex of secong largest elemnt in the array is "<<second_largest(a,n);

    return 0;
}