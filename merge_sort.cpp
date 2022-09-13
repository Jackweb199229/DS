#include <bits/stdc++.h>
using namespace std;

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void merge(int a[], int low, int mid, int high)
{
    int n = (high-low)+1;
    int b[n];
    int i, j, k;
    i = low, k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (a[i] <= a[j])
        {
            b[k] = a[i];
            k++;
            i++;
        }
        else
        {
            b[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        b[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        b[k] = a[j];
        k++;
        j++;
    }

    for (int i = low; i <= high; i++)
    {
        a[i] = b[i];
    }
}

void mergeSort(int a[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}

int main()
{
    int n;
    cin >> n;
    int *a;                             //  int a[n];
    a = (int *)malloc(n * sizeof(int)); // ----
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    // display(a, n);
    cout << "After sorting array\n";
    mergeSort(a, 0, n - 1);
    display(a, n);

    return 0;
}