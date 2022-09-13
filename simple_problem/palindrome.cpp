#include <iostream>
using namespace std;
int main()
{
    int  d, n, rev = 0, temp;
    cout << "enter a number for palindrome number :" ;
    cin >> n;
    temp = n;
    while (n > 0)
    {
        d = n % 10;
        rev = rev * 10 + d;
        n /= 10;
    }
    if (rev == temp)
    {
        cout <<temp << " is palindrome number " << endl;
    }
    else
    {
        cout << temp<< " is not palindrome number " << endl;
    }
    return 0;
}
