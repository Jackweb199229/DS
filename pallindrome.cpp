#include <iostream>
using namespace std;
int pallin(int n)
{
    int d, rev = 0;
    int temp = n;
    while (n > 0)
    {
        d = n % 10;
        rev = rev * 10 + d;
        n /= 10;
    }
    if(rev == temp){
        cout<<" yes IT IS PALLINDROME  ";
    }
    else{
        cout<<"no IT IS NOT PALLINDROME ";
    }
    return rev;
}
int main()
{
    int n;
    cin >> n;
    cout<<pallin(n)<<endl;

    return 0;
}