#include <iostream>
using namespace std;

int fact(int n){
    int factorial = 1;
    for(int i=2; i<=n; i++){
        factorial*=i;
    }
return factorial;
}

int main(){
    int n , r;
    cout<<"enter the number: ";
    cin>>n;
    cout<<fact(n);
    cout<<"\n calculate ncr \n";
    cout<<"enter value of n and r : ";
    cin>>n>>r;
    cout<<"ncr = "<<fact(n)/(fact(n-r)*fact(r));

return 0;
}