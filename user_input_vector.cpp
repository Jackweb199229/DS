#include<iostream>
#include<vector>
using namespace std;


// 67 template function



void display(vector<int> &v){
    cout<<" The array is : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" ";
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

    // v.pop_back();
    
//    display(v);

//                      Iterate 0 to nth element
   vector<int> :: iterator iter = v.begin();
//    v.insert(iter, 566);

//                      and I want 566 is placed in 2nd place
//    v.insert(iter+1, 126);


//                       How to print 255 insert 3 times
//    cout<<"255 3 times"<<endl;
   v.insert(iter+1, 5, 255);

   display(v);
//    sort(v);
return 0;
}