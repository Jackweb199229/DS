#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cout<<"enter the year\n";
    cin>>n;
    if(n%4==0 && n%100!=0){
        cout<<"leap year";
    }
    else if(n%400==0){
        cout<<"leap year";
    }
    else{
        cout<<"non leap year";
    }
}
    return 0;
}