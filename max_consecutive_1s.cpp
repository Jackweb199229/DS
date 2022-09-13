#include<bits/stdc++.h>
using namespace std;

// LOGIC OF MAXIMUM CONSECUTIVE 1's in a binary array
int max_consecutive(int a[], int n){
    int count = 0, res = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(a[i] == 0){
            count = 0;
        }
        else{
            count = count+1; // count+=1, count = count+1;//
            res = max(res, count);
        }
        
    }
    return res;
    
}

// LOGIC OF MAXIMUM CONSECUTIVE 0's in a binary array


int mx_consec(int a[], int n){
    int count = 0, res = 0;
    for (int i = 0; i < n; i++)
    {
      if (a[i] == 1)
      {
          count = 0;
      }
      else{
          count+=1;
          res = max(res , count);
      }
      
    }
    return res;
    
}


int main(){
    int n;
    cin>>n;
    int a[n]; // array = {0 1 1 1 0 1 1} O/P = 3, {1 0 1 1 1 1 0 1 1} O/P = 4
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>a[i];
    }
    
    cout<<max_consecutive(a, n)<<endl;
    cout<<"MAXIMUM CONSECUTIVE 0's in a binary array"<<endl;
    cout<<mx_consec(a, n);
}