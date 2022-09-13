#include <bits/stdc++.h>
using namespace std;
// worst case of complexity of quicksort is O(n^2)
// Best case of complexity of quicksort is O(nlog(n))
// partition 
int partition(int a[], int low, int high){
    int pivot = a[low];
    int i = low+1;
    int j = high;
    int temp;
    while(i<j){
        while (a[i] <= pivot){
            i++;
        }
        while (a[j] > pivot){
            j--;
        }
        if(i<j){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;   
return j;
}

void quicksort(int a[], int low, int high){
    int loc;  
    if(low<high){          // Index of pivot after partiton
    loc = partition(a, low, high);
    quicksort(a, low, loc-1);   // sort left subarray
    quicksort(a,  loc+1, high); // sort right subarray
    }
}

 int main(){
     int n;
     cin>>n;
     int a[n];
     for (int i = 0; i < n; i++)
     {
        cin>>a[i];
     }
    quicksort(a, 0, n-1);
    for (int i = 0; i < n; i++)
     {
        cout<<a[i]<<" ";
     }
     
     return 0;
 }