#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string str)
{
    stack<int> s;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            s.push(str[i]);
        }
        else if (!s.empty() && ((s.top() == '(' && str[i] == ')') ||
                                (s.top() == '{' && str[i] == '}') ||
                                (s.top() == '[' && str[i] == ']')))
        {
            s.pop();
        }
        else
        {
            return false;
            break;
        }
    }
    return (s.empty() == true);
}
int main()
{
    string str;
    cout << "Enter a string like ({[]})" << endl;
    getline(cin, str);
    if (isBalanced(str))
    {
        cout << "Balanced" << endl;
    }
    else
    {
        cout << "not Balanced" << endl;
    }
    return 0;
}