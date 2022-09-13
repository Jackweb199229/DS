#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
        vector<int> v;

    // capacity and size
cout<<"Capacity and size"<<endl;
for (int i = 0; i < 10; i++)
{
    cout<<"cap : "<<v.capacity()<<endl;
    cout<<"size : "<<v.size()<<endl;
    v.push_back(i + 1);
}

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

// only use for get and update 
    v[1] = 100;


// Don't use [] for inserting elements
//      v[5] = 200; 



// insert new element
v.push_back(24);
v.push_back(52);

//how to know size of the array

cout<<"Size: "<<v.size()<<endl;

    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
    cout<<v[4]<<endl;

// how to access the array safely

cout<< v.at(2)<<endl;
cout<< v.at(3)<<endl;

// And we use loop 
cout<<"loop..........."<<endl;
for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<endl;
}



return 0;
}



