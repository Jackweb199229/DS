#include <bits/stdc++.h>
using namespace std;

// NAIVE METHOD
int get_water(int a[], int n){
    int res = 0;
    for (int i = 1; i < n; i++)
    {
       int lmax = a[i];
       for (int j = 0; j < i; j++)
       {
           lmax = max(lmax, a[j]);
       }
        int rmax = a[i];
       for (int j = i+1; j < n; j++)
       {
           rmax = max(rmax, a[j]);
       }
       res = res + (min(lmax, rmax) - a[i]);
       
    }
    return res;
    
}

//a[3] = {2,0,2} : 2
int trapping_rain_water(int a[], int n){
    int temp =0;
    for (int i = 1; i < n-1; i++)
    {
      if(a[i] < a[i-1]){
          temp += (a[i] + a[i-1]);
      }
    }
    return temp;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
    }
    // cout<<trapping_rain_water(a, n);
    cout<<get_water(a, n);

    return 0;
}