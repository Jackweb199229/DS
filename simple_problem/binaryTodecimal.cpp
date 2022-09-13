#include <iostream>
using namespace std;
int main(){
    int n,rem;
    int a[20],i=0;
    cout<<"enter binary number : ";
    cin>>n;
    // not completed
   while(n){
       rem = n*(2^i);
       a[i] = rem;
       n = n/2;
       i++;
   }
  cout<<a[i];
    return 0;
}