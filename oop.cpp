#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    int roll;
};

int main()
{
    student a[3];
    for (int i = 0; i < 3; i++)
    {
        cin>>a[i].name>>a[i].age>>a[i].roll;
    }
    for (int i = 0; i < 3; i++)
    {
        cout<<"Name = "<<a[i].name<<endl;
        cout<<"Age = "<<a[i].age<<endl;
        cout<<"Mob. = "<<a[i].roll<<endl;
        cout<<endl;
    }
    
return 0;
}