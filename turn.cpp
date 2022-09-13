#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    
    char c = 'R';
    int x = 0, y = 0;
    int distance = 10;
    
    while(n)
    {
        switch(c)
        {
            case 'R':
            x = x + distance;
            c = 'U';
            distance = distance + 10;
            break;
            
            case 'U':
            y = y + distance;
            c = 'L';
            distance = distance + 10;
            break;
            
            case 'L':
            x = x - distance;
            c = 'D';
            distance = distance + 10;
            break;
            
            case 'D':
            y = y - distance;
            c = 'A';
            distance = distance + 10;
            break;            
            
            case 'A':
            x = x + distance;
            c = 'R';
            distance = distance + 10;
            break;
        }
        n--;
    }
    
    cout << x << " " << y <<endl;
    return 0;
}