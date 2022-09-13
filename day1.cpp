#include <iostream>
using namespace std;

 
int fun1(int n){
    return n*(n+1)/2;
}
int main(){

    int n,sum=0;
    cin>>n;
    for(int i=0; i<=n; i++){
        sum+=i;
    }
    cout<<sum<<endl;
    cout<<" sum of n natural number : " <<fun1(n)<<endl;
    return 0;
}