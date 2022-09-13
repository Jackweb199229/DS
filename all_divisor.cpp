#include <iostream>
using namespace std;

/*
All Divisors of Number
n = 15
1 3 5

Efficient Solution
Divisor Always appear in the pair 
30 = (1,30) , () ,(2,15) , (3,10) , (5,6)

One of the divisor in every pair is smaller
than or equal to sqrt(n).

For a pair (x,y)
    let x be the smaller , i.e, x<=y
    x*x <= n
    x<= (sqrt(n))
*/

// naive solution
void printDivisor(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
    }
}

// Effecient Solution
void print_divisor(int n){
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
        if(i != n/i)
            cout<<n/i<<" ";
        }
    }
}

// More Effecient Solution
void efficient_sol(int n){
    int i;
    for( i=1; i*i<=n; i++){
        if(n%i == 0)
            cout<<i<<" ";
    }
    for( ; i>=1; i--){
        if(n%i == 0)
            cout<<(n/i)<<" ";
    }
}

int main()
{
    int n;
    cout << "enter number : ";
    cin >> n;
    printDivisor(n);
    cout<<"\n";
    print_divisor(n);
    cout<<"\n";
    efficient_sol(n);
    return 0;
}