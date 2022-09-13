#include <iostream>
using namespace std;
int deletion(int a[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
            break;
}
for(int j=i; j<n-1; j++){
    a[i] = a[i+1];
}
return n-1;
}
int main()
{
    int n;
    cin>>n;
    int a[n],i,x;
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"enter the value of x : ";
    cin>>x;
    cout<<deletion(a,n,x);

    return 0;
}