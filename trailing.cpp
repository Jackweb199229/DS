#include <iostream>
using namespace std;

// NAIVE SOLUTION TRAILING ZEROS
int countZero(int n)
{

    int fact = 1;
    for (int i = 2; i <= n; i++)
        fact = fact * i;

    int count = 0;
    while (fact % 10 == 0)
    {
        count++;
        fact = fact / 10;
    }
    cout<<"trailing zero = ";
    return count;
}

// EFFIECIENT TRAILING ZEROES : 

int countTrailingZero(int n){
    int res = 0;
    for(int i=5; i<=n; i=i*5)
        res = res + n/i;
    cout<<"trailing zero = ";
    return res;
}



int main()
{
    int n;
    cout<<"enter the number\n";
    cin >> n;
    cout << countZero(n) << endl;
    cout<< countTrailingZero(n)<<endl;

    return 0;
}