#include <iostream>
#include <string.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    string gender;

    void printInfo()
    {
        cout << "Name = " << name << endl;
        cout << "roll = " << roll << endl;
        cout << "gender = " << gender << endl;
    }
};
int main()
{
    Student st[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter name" << endl;
        cin >> st[i].name;
        cout << "Enter Roll" << endl;
        cin >> st[i].roll;
        cout << "Enter Gender" << endl;
        cin >> st[i].gender;
    }
    for (int i = 0; i < 3; i++)
    {
        st[i].printInfo();
    }

    return 0;
}