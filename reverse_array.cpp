#include <iostream>
using namespace std;

// using function
void reverse(int a[], int n)
{
  int low = 0, high = n - 1, temp;
  while (low < high)
  {
    temp = a[low];
    a[low] = a[high];
    a[high] = temp;
    low++;
    high--;
  }
}

// function to print array
void dispaly(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << a[i];
  }
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
  cout << "your array is ";
  dispaly(a, n);

  // print reverse
  cout << "\nafter reverse of array ";
  for (int i = n - 1; i >= 0; i--)
  {
    cout << a[i] << " ";
  }

  // using function

  reverse(a, n);
  cout << "\nafter reverse of array using function is ";
  dispaly(a, n);
  return 0;
}