#include <iostream>
using namespace std;

void fun(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << "GFG" << endl;
    fun(n - 1);
}

int main()
{
    fun(2);

    return 0;
}

/*
 APPLICATION OF RECURSION
 1. Many algorithm techniques are based on recursion.
    ->Dynamic Programming
    ->Backtracking
    ->Divide and Conquere (Binary Search, Quick Sort  and Merge Sort)

2. Many Problems inherintly recursive
    ->Tower of Hanoi
    -> DFS based traversal(DFS of Graph and Inorder, preorder, postorder traversal of tree)
*/