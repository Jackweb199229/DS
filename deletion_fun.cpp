#include<iostream>
using namespace std;
void display(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}

void inDeletion(int a[], int size, int pos){
    int i;
    if(a[i] <0 || a[i]>50){
        cout<<"inavlid"<<endl;
    }
    for(int i=pos; i<size-1; i++){
        a[i] = a[i+1];
    }
}

int main(){
    int size;
    cin>>size;
    int a[50], pos;
    for(int i=0; i<size; i++){      // input aray
        cin>>a[i];
    }

     cout<<"array is ";         
    display(a, size);           // print array


    // input from user for delete item into the index
    cout<<"\nenter the index what you want to delete : ";
    cin>>pos;
    inDeletion(a, size, pos);
    size--;
    display(a, size);

   
    return 0;
}