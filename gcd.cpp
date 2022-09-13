#include <iostream>
using namespace std;

// NAIVE SOLTUION
int gcd1(int a , int b){
    int res = min(a,b);
    while(res > 0){
        if(a%res == 0 && b%res == 0)
            break;
        res--;
    }
    cout<<"gcd1 = ";
    return res;
}

// EUCLIDEAN ALGORITHM 
int gcd2(int p, int q){
    while (p!=q)
    {
        if(p>q)
            p = p-q;
        else
            q = q-p;
    }
       cout<<"gcd2 = ";
    return p;
}

// Euclidean Algorithm 
int gcd3(int a, int b){
    if(b==0)
        return a;
    else{
     return gcd3(b,a%b);

    }
       
    
}

int main(){
    int n1,n2;
    cout<<"enter two number : ";
    cin>>n1>>n2;
    cout<<gcd1(n1,n2)<<endl;
    cout<<gcd2(n1,n2)<<endl;
    cout<<"gcd3 = "<<gcd3(n1,n2)<<endl;
    return 0;

}