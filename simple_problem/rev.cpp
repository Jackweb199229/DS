#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rev = 0, d;
    while(n>0){
        d = n%10;
        rev = rev*10+d;
        n/=10;
    }
    cout<<rev;
return 0;
}