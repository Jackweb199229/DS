#include <iostream>
using namespace std;
// naive solution
int lcm1(int a, int b)
{
    int res = max(a, b);
    while (true)
    {
        if (res % a == 0 && res % b == 0)
        {
            break;
        }
        res++;
    }
    return res;
}

// Euclidean Algorithm 

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
    {
        return gcd(b, a % b);
    }
}
int lcm2(int a, int b)
    {
        return (a * b) / gcd(a, b);
    }



int main()
    {
        int a, b;
        cout << "enter two number : ";
        cin >> a >> b;
        cout << "lcm1 = " << lcm1(a, b)<<endl;
        cout<<"lcm2 = "<<lcm2(a,b)<<endl;
        return 0;
    }