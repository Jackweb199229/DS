#include<iostream>
using namespace std;
int main(){
    int count,sum = 0, a[50];
    float average;
    cout<<" Enter the number  : ";
    cin>>count;
    cout<<"Enter the "<< count <<" element : ";   // Read "count" elements from user
    for (int i = 0; i < count; i++)
    {
        cin>>a[i];
    }
    // find sum of all array
    for(int i = 0; i < count; i++) {
        sum += a[i];
    }
    average = (float)sum/count;
    cout<<"Average  = "<< average;

    return 0;

}