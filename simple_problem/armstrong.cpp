#include <iostream>
#include <math.h>
using namespace std;
void arm(int n)
{
    int temp;
    int sum = 0, d;
    temp = n;
    while (n > 0)
    {
        d = n % 10;
        sum = sum + pow(d,3);
        n /= 10;
    }
    cout<<" palindrome = "<<sum<<endl;
    if (temp == sum)
    {
        cout << temp << " is armstrong number";
    }
    else
    {
        cout << temp << " is not armstrong number";
    }
}

int main()
{
    int n;
    cout<<"enter the you want to check armstrong number is or not : ";
    cin >> n;
    arm(n);
    return 0;
}