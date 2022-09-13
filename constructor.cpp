#include<iostream>
using namespace std;

// Example of constructor

class student{
    string name;

    public:
    int age;
    bool gender;

    student(){
        cout<<"Default constructor"<<endl;
    }

    student(string s, int a, bool g){
        cout<<"Parametrised constructor"<<endl;
        this->name = s;
        this->age = a;
        this->gender = g;
    }//  Parameterised constructor

    student(student &a){
        cout<<"Copy constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }


    // void setName(string s, int a, bool g){
    //     name = s;
    //     age  = a;
    //     gender = g;
    // }
    
    void getName(){
       cout<<"Name = "; 
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;
    }

    
};


int main()
{
    student a("MJ", 20, 1);
    a.getName(); 
    student b; 
    student c = a; 
    c.getName();


return 0;
}