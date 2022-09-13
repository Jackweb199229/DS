#include<iostream>
using namespace std;
int main(){
    int n = 3, m = 3;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           a[i][j] = i+j;
        }
        cout<<endl;
    }
    cout<<"print the matrix: "<<endl;
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