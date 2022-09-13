// Sweet seventeen prblem
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write C++ code here
    cout << "Enter input like this 1A or 1a..." << endl;

    string str;
    getline(cin, str);

    long long decimal;
    int i = 0, len, val;
    decimal = 0;
  

    len = str.length();
    len--;
    cout<<"length of string : " << len << endl;
    for (i = 0; i < str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            // 48 to 57 are ascii values of 0 - 9
            // say value is 8 its ascii will be 56
            // val = str[i] - 48 => 56 - 48 => val = 8
            val = str[i] - 48;
            cout<<"val = "<<val<<endl;
        }
        else if (str[i] >= 'a' && str[i] <= 'g')
        {
            // 97 to 103 are ascii values of a - g
            // say value is g its ascii will be 103
            // val = str[i] - 97 + 10 => 103 - 97 + 10=> val = 16
            // 10 is added as g value is 16 not 6 or a value is 10 not 0
            val = str[i] - 97 + 10;
            cout<<"val = "<<val<<endl;
        }
        else if(str[i] >= 'A' && str[i] <= 'G'){
            //similarly, 65 to 71 are values of A - G
            val = str[i] - 65 + 10;
            cout<<"val = "<<val<<endl;
        }
        decimal = decimal + val * pow(17,len);
        len--;
        
    }
    cout<<decimal;
    
    return 0;
}
