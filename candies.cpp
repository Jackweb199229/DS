#include<iostream>
using namespace std;
int main()
{
    int N = 10;
    int num;
    cin>>num;
    if(num>0 && num<=N){
        cout<<"Number of Candies sold "<<num<<endl;
        cout<<"Number of Candies available "<<N-num<<endl;
    }
    else{
        cout<<"Invalid"<<endl;
        cout<<"Number of Candies available "<<N-num<<endl;
    }

    return 0;
}