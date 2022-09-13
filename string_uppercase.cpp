#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int f = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            f = 1;
            str[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            f = 2;
            str[i] += 32;
        }
    }
    if(f == 1){
        cout<<"UpperCase : " << str << endl;
    }
    else if(f == 2){
        cout<<"LowerCase : " << str << endl;
    }
    
    return 0;
}