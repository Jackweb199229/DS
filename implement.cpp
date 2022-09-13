#include<bits/stdc++.h>
using namespace std;

struct mystack
{
    int *arr;
    int cap;
    int top;
    mystack(int c){
        cap = c;
        arr = new int[cap];
        top = -1;
    }

    void push(int x){
        top ++;
        arr[top] = x;
    }

    int pop(){
        int res = arr[top];
        top--;
        return res;
    }

    int peek(){
        return arr[top];
    }

    int size(){
        return top+1;
    }

    bool isEmpty(){
        return (top == -1);
    }

};

int main()
{
    vector<int> v;
    int n;
    cin>>n;
    mystack s(n);
    int ele;
    for(int i=0; i<n; i++){
        cout<<"Enter the element of array : ";
        cin>>ele;
        s.push(ele);
    }
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.push(40);
    // s.push(50);
    cout<< s.pop() << endl; // 50 is deleted
    cout<< s.size() << endl; // size is 4
    cout<< s.peek() << endl; // top or last element is 40
    cout<< s.isEmpty() << endl; // 0 

return 0;
}