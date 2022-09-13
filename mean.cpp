// Input  : a[] = {1, 3, 4, 2, 6, 5, 8, 7}
// Output : Mean = 4.5
//          Median = 4.5
// Sum of the elements is 1 + 3 + 4 + 2 + 6 + 
// 5 + 8 + 7 = 36
// Mean = 36/8 = 4.5
#include <iostream>
using namespace std;
int main(){
    int a[5],sum=0;
    for(int i=0; i<5; i++){
        cin>>a[i];
    }
    for(int i=0; i<5; i++){
        sum+=a[i];
    }
    int mean = sum/5;
    cout<<"mean = "<<mean;
    return 0;
}