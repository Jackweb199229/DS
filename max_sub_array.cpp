#include <bits/stdc++.h>
#include <climits>
using namespace std;

// copy
/*
array = {1,2,3}
A subarray is a contiguous part of an array
sub-array = {1} , {2}, {3} , {1,2} , {2,3} , {1,2,3}
*/

/*  C++ code to generate all possible subarrays/subArrays
    Complexity- O(n^3) */

// Prints all subarrays in arr[0.to.n-1]
void subArray(int arr[], int n)
{    
    int maxSum = INT_MIN;
    // Pick starting point
    for (int i = 0; i < n; i++)
{
    // Pick ending point
    for (int j = i; j < n; j++)
    {
        // Print subarray between current starting
        // and ending points
        int sum = 0;
        for (int k = i; k <= j; k++){
            sum = sum + arr[k];
            // cout << arr[k] << " ";
        }
            // cout<<endl;
        maxSum = max(maxSum,sum);
    }
}
cout<<maxSum<<endl;
}

// Driver program
int main()
{
    // int arr[] = {1, 2, 3, 4};
    int arr[] = {1, -2, 3, -1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "All Non-empty Subarrays\n";
    subArray(arr, n);
    cout << "###################################################" << endl;
    return 0;
}