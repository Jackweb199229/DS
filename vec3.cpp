#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";

    }
    
    cout<<endl;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<int> v;
    int size, ele;
    cin>>size;
    for(int i=0; i<size; i++){
       cin>>ele;
       v.push_back(ele);
    } 
    display(v);
    
    
    return 0;
}
