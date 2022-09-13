#include <iostream>
using namespace std;

// NAIVE METHOD FOR LEADERS IN AN ARRAY
int leader(int a[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        int flag = false;
        for (j = i + 1; j < n; j++)
        {
            if (a[i] <= a[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            cout << a[i] << " ";
        }
    }
}

// EFFICIENT METHOD FOR LEADERS IN AN ARRAY
int crr_leader(int a[], int m)
{
    int currnt_leader = a[m - 1];
    cout << currnt_leader << " ";
    for (int i = m - 2; i >= 0; i--)
    {
        if (currnt_leader < a[i])
        {
            currnt_leader = a[i];
            cout << a[i] << " ";
        }
    }
}

void crnt_leader(int a[], int n)
{
    int i;
    int currnt_leader = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > currnt_leader)
        {
            currnt_leader = a[i];
        }
    }
    cout << "Leader is " << currnt_leader << endl;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    leader(a, n);
    cout << "\n---------efficient method------------" << endl;
    crr_leader(a, n);
    cout << "\n3rs function" << endl;
    crnt_leader(a, n);
    return 0;
}