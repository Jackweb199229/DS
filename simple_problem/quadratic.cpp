#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a , b ,c , r1 , r2 , d , realpart , imgpart ;
    cout<<"enter coefficient of a , b and c ";
    cin>>a>>b>>c;
    d = b*b-4*a*c;
    if(d>0)
    {
       r1 = (-b + sqrt(d)) / (2*a);
       r2 = (-b - sqrt(d)) / (2*a);
       cout<< "Roots are real and different "<<endl;
       cout<<"r1 = " << r1<<endl;
       cout<<"r2 = " << r2<<endl;
    }
    else if(d>0){
        cout<<"Roots are real and same"<<endl;
        r1=r2= -b/(2*a);
        cout<<"r1 = "<<r1<<endl;

    }
    else{
        realpart = -b/(2*a);
        imgpart = sqrt(-d)/(2*a);
        cout<<"Roots are imaginary and different"<<endl;
        cout<<"r1 = "<<realpart<<"+"<<imgpart<<"i"<<endl;
        cout<<"r2 = "<<realpart<<"-"<<imgpart<<"i"<<endl;
        
    }

    return 0; 
}