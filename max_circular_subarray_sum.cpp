#include<iostream>
using namespace std;

int max_cicular_subArray(int a[], int n)
{
    int res = a[0];
    for (int i = 0; i < n; i++)
    {
        int curr_max = a[i];
        int sum = a[i];
        for (int j = i; j < n; j++)
        {
            int index = (i+j)%n;
            sum = sum + a[index];
            curr_max = max(curr_max, sum);
        }
        res = max(res, curr_max);
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];   
    }
    
    cout<<max_cicular_subArray(a,n) <<endl;
return 0;
}