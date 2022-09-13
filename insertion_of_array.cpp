#include <iostream>
using namespace std;

int main(){
int a[50],size,pos,num,i;
cout<<"\nenter the size of array :";
cin>>size;
// input array
for(i=0; i<size; i++){
    cin>>a[i];
}
// output array
cout<<"\nyour array is \n";
for(i=0; i<size; i++){
   cout<<a[i]<<" ";
}

// input insert array
cout<<"\nenter the number what you want to inserted : ";
cin>>num;

cout<<"\nenter the position where you insert this number : ";
cin>>pos;
// logic for insertion
for(i=size-1; i>=pos-1; i--){
    a[i+1] = a[i];   
}
a[pos-1] = num;
size++;

cout<<"\nyour inserted array is "<<endl;
for(i=0; i<size; i++){
    cout<<a[i]<<" ";
}
    return 0;
}

