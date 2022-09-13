#include <bits/stdc++.h>
using namespace std;
void leader(int arr[], int n)
{
    int current_leader = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > current_leader)
        {
            current_leader = arr[i];
        }
    }
    cout << "leader is "
         << " " << current_leader << endl;
}
int main()
{
    int arr[4] = {1, -3, 4, 10};
    leader(arr, 4);
    return 0;
}