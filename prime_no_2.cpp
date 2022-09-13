#include <iostream>
using namespace std;
bool isprime(int n)
{
    if (n == 1)
        cout << "non prime" << endl;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            cout << "non prime" << endl;
    }
    cout << "prime" << endl;
}
int main()
{
    int n;
    cin >> n;
    cout << isprime(n) << endl;
    return 0;
}