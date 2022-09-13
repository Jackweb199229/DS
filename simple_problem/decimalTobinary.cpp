#include<iostream>
using namespace std;
int main(){
// convert decimal to binary
int n , rem;
int a[20] , i = 0;
cin>>n;
while(n){
    rem = n % 2;
    a[i] = rem;
    n = n/2;
    i++;
   
}
for(int j=i-1; j>=0; j--){
cout<<a[j];
}
    return 0;
}