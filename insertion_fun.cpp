#include <iostream>
using namespace std;

void display(int a[], int n){
    for(int i=0; i< n; i++){
        cout<<a[i];
    }
}

int insertion_array(int a[], int n, int pos, int x)
{
    int cap;
    if(n == cap)
        return n;
    for (int i = n - 1; i >= pos-1; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos - 1] = x;
}

int main()
{
    int size;
    cin >> size;
    int cap;
    cin >> cap;
    int a[cap], pos, num;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    
    cin >> pos;
    cin >> num;
    insertion_array(a, size, pos, num);
    size += 1;
    display(a,size);

 return 0;
}
