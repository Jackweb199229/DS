#include<iostream>
#include<vector>
using namespace std;


// 67 template function



void display(vector<int> &v){
    cout<<" The array is : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";

    }
    
    cout<<endl;
}
int main()
{
    vector<int> v;
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int ele;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the element of array : ";
        cin>>ele;
        v.push_back(ele);
    }

    display(v);

//  v.erase(v.begin()+2);
//      display(v);

//      The array is : 1 2 3 4 5 
//  The array is : 1 2 4 5 



//          If erase 6th element in array then the aoutput is 
//          v.erase(v.begin()+5);
//          output: 
//              The array is : 1 2 3 4 5 6 7 8 9 10 
//              The array is : 1 2 3 4 5 7 8 9 10 

//          ERASE THE FIRST 3 ELEMENT

v.erase(v.begin(), v.begin()+3);
display(v);

// v.erase(v.begin(), v.end());
// display(v);
// cout<<" I m deleted.."<<endl;
return 0;
}