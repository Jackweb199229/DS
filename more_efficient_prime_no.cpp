#include <iostream>
using namespace std;
bool isprime(int n)
{
  int i;
  if (i == 1)
    return false;
  if (i == 2 || i == 3)
    return true;
  if (i % 2 == 0 || i % 3 == 0)
    return false;
  for (i = 5; i * i <= n; i = i + 6)
    if (n % i == 0 || n % (i + 2) == 0)
      return false;
  return true;
}
int main()
{
  int n;
  cin >> n;
  cout << isprime(n);
  return 0;
}