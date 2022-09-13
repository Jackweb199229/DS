#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the size of n and m : ";
    cin>>n>>m;
    int a[n][m];
    cout<<"enter the element of array: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           cin>>a[i][j];
        }
        cout<<endl;
    }
    cout<<"print the matrix: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    

return 0;
}