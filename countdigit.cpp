#include <iostream>
using namespace std;

int countdigit(int n){
    int count =0;
    while(n > 0)
    {
        n = n/10;
        count++;
    }
return count;
}

int main(){
    int x;
    cin>>x;
    cout<<"length of number is " << countdigit(x)<<endl;
    return 0;
}