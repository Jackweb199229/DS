#include <bits/stdc++.h>
using namespace std;

bool isvalid(string str)
{
    stack<char> s;
    bool ans = true;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            s.push(str[i]);
        }

        else if (!s.empty() && ((s.top() == '(' && str[i] == ')') ||
                  (s.top() == '{' && str[i] == '}') ||
                  (s.top() == '[' && str[i] == ']')) )

        {
            s.pop();
        }
        else{
            ans = false;
            break;
        }
    }

    if(!s.empty())
        return false;
    return ans;
}

int main()
{
    string str;
    cout<<"Enter ({[]}) "<<endl;
    getline(cin, str);

    if (isvalid(str))
    {
        cout << "Balanced" << endl;
    }
    else
    {
        cout << "Unbalanced" << endl;
    }

    return 0;
}