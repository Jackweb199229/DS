//---------------------------------------------------------------//
/* C++ program to enter the marks of five subjects and calculate total, average, and percentage */

#include <iostream>

using namespace std;

int main()
{
    float p, c, m, e, h, total, average, percentage;
    

    cout << "Enter the marks of physics : ";
    cin >> p ;
    cout << "Enter the marks of chemistry : ";
    cin>>c;
    cout << "Enter the marks of math : ";
    cin>>m;
    cout << "Enter the marks of English : ";
    cin>>e;
    cout << "Enter the marks of history : ";
    cin>>h;
    cout<<"Marks are :\n ";
    cout << "physics : " << p << endl;
    cout << "chemistry : " << c << endl;
    cout << "math : " << m << endl;
    cout << "english : " << e << endl;
    cout << "history : " << h << endl;
    cout << "\n";
    // Calculate total, average and percentage
    total = p + c + m + e + h;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    // Output
    cout << "The Total marks   = " << total << "/500\n";
    cout << "The Average marks = " << average << "\n";
    cout << "The Percentage    = " << percentage << "%"<<endl;
    if(percentage >= 75){
        cout<<"Division = distinction";
    }
    else if(percentage >=60){
        cout<<"Division = 1st division";
    }
    else if(percentage >= 50){
        cout<<"Division = 2nd division";
    }
    else if(percentage >= 30){
        cout<<"Division = 3rd division";
    }
    else{
        cout<<"Division = fail";
    }

    return 0;
}