#include <iostream>
using namespace std;

void display(int a[], int size){
    for(int i=0; i<size; i++){
        cout<<a[i];
    }
}

// linearSearch
int linearSerach(int a[], int size, int element){
    for(int i=0; i<size; i++){
        if(a[i]==element){
            return i;
        }
    }
    return -1;
}

int binarySearch(int a[], int size, int x){
    int mid,low = 0, high = size-1;
    //START SEARCHING
    while(low<=high){
        mid = (low+high)/2;
        if(a[mid] == x){
            return  mid;
        }
        if(a[mid]<x){
            low = mid+1;
        }
        else{
            high = mid - 1;
        }
    }
    // END SEARCHING
    return -1;
}

int main(){
int n;
cout<<"enter the size of array : ";
cin>>n;
int a[n],ele,x;
cout<<"\nEnter the element of array : ";
for(int i=0; i<n; i++){
    cin>>a[i];
}
display(a, n);
// linear search
cout<<"\nenter the element for searching in linear search : ";
cin>>ele;

// binary search
cout<<"\nenter the element for searching in binary search : ";
cin>>x;
//function calling for linear search
cout<<"\nat index "<<linearSerach(a,n,ele)<<" value is "<<ele<<endl;

//function calling for binary search
 cout<<"\nat index "<<binarySearch(a,n,x)<<" value is "<<x<<endl;
 
  
    return 0;
}