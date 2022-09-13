#include <bits/stdc++.h>
using namespace std;

int freq(int a[], int n){
    int f = 1;
    int i = 1;
    while(i<n){
        while(i<n && a[i] == a[i-1]){
            f++;
            i++;
        }
        cout<<a[i-1]<<" "<<a[i]<<endl;
        i++;
        f = 1;
    }
    if(n==1 || a[n-1] != a[n-2]){
        cout<<a[n-1]<<" "<<1<<endl;
    }

}

int main(){
int a[10] = {1,1,1,2,2,3,3,3,4,4};
freq(a,10);

    return 0;
}