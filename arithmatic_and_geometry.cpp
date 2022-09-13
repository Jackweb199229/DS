#include <iostream>
using namespace std;

// Arithmetic And geometry Progressions
// 2,4,6,8,10,......  // avg = sum/n
//a = 2               // sum = avg*n
//d = 2               //  = (FT + LT)/2 * N
//a + d               //  = n/2(a+a+(n-1)d)
//a + 2d              // = n/2(2a + (n-1)d)
//............
// a+(n-1)d

int main()
{
    int a = 2, d = 2, n, sum;
    cout << "enter the number you want arithmetic progression: " ;
    cin >> n;
     for(int i=0;i<n;i++)
     {sum = a+(i-1)*d;
       
        cout << sum <<",";
        }
    

    return 0;
}