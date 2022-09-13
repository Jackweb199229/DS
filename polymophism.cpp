#include<iostream>
using namespace std;

//function overloading

class Myfunc
{
    public:
    void fun(){
        cout<<"I m a function with no argument"<<endl;
    }
    void fun(int x){
        cout<<"I m a function with int argument"<<endl;
    }
    void fun(double x){
        cout<<"I m a function with double argument"<<endl;
    }
};

// // operator overloading
// class complex{
//     private:
//     int real, imag;
//     public:
//     Complex(int r, int i){
//         real = r;
//         imag = i;
//     }
//     f

// };

int main()
{
    Myfunc obj;
    obj.fun();
    obj.fun(5);
    obj.fun(6.8);

    
return 0;
}