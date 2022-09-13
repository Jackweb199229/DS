#include <iostream>
using namespace std;
int main()
{
    // 12 24 48 96..........
    // a1 = first term
    // a2 = 2nd term
    // r = a2/a1
    // an = a1*(1-r^n-1)
    // sn = a1*(1-r^n)/(1-r)

    int a1, a2, an, sn, r, n;
    cout << "enter the number : ";
    cin >> n;
    cout << "enter the value of a1 and a2 : ";
    cin >> a1 >> a2;
    r = a2 / a1;
    an = a1*r^(n-1);
    sn = a1 * (1 - r ^ n) / (1 - r);
    cout << "common ratio is " << r << endl;
    cout << " an  is " << an << endl;
    cout << "sum of arithmetic is " << sn << endl;

    return 0;
}