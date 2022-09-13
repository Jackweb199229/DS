#include<iostream>
using namespace std;

// function to convert decimal to binary
void decimaltobinary(int n){
    int a[30];       //  array to store in binary number

    int i = 0;        // couter
    while(n>0){
        a[i] = n%2;    // logic
        n/=2;
        i++;
    }
    // printing binary array in reverse order
    for(int j=i-1; j>=0; j--){
        cout<<a[j];
    }

}

int main(){
    int n;
    //45 = 1*32 + 0*16 + 1*8 + 1*4 + 0*2 + 1*1
    //45 = 1*2^5 + 0*2^4 + 1*2^3 + 1*2^2 + 0*2^1 + 1*2^0
    cout<<"Enter the decimal number : ";
    cin>>n;
    cout<<"binary number is ";
    decimaltobinary(n);

    return 0;
}